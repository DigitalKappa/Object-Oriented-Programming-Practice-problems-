#include <opencv2/opencv.hpp>
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string name, id, department;

    // Step 1: Input student information
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    std::cout << "Enter student ID: ";
    std::getline(std::cin, id);
    std::cout << "Enter department: ";
    std::getline(std::cin, department);

    // Step 2: Capture image from webcam
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot access the camera!" << std::endl;
        return -1;
    }

    cv::Mat photo;
    std::cout << "Press any key to capture your photo..." << std::endl;
    cv::namedWindow("Webcam", cv::WINDOW_AUTOSIZE);

    while (true) {
        cap >> photo;
        if (photo.empty()) break;
        cv::imshow("Webcam", photo);
        if (cv::waitKey(30) >= 0) break;
    }

    cap.release();
    cv::destroyAllWindows();

    // Step 3: Create ID Card template
    int width = 600, height = 300;
    cv::Mat id_card(height, width, CV_8UC3, cv::Scalar(255, 255, 255)); // white background

    // Draw border
    cv::rectangle(id_card, cv::Point(10, 10), cv::Point(width - 10, height - 10), cv::Scalar(0, 0, 0), 3);

    // Resize and place photo
    cv::Mat resized_photo;
    cv::resize(photo, resized_photo, cv::Size(120, 120));
    resized_photo.copyTo(id_card(cv::Rect(30, 30, 120, 120)));

    // Add text info
    int x = 180, y = 60;
    cv::putText(id_card, "Student ID Card", cv::Point(180, 40), cv::FONT_HERSHEY_DUPLEX, 1, cv::Scalar(0, 0, 255), 2);
    cv::putText(id_card, "Name: " + name, cv::Point(x, y + 40), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 0, 0), 2);
    cv::putText(id_card, "ID: " + id, cv::Point(x, y + 80), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 0, 0), 2);
    cv::putText(id_card, "Dept: " + department, cv::Point(x, y + 120), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 0, 0), 2);

    // Step 4: Save and show final ID card
    cv::imwrite("student_id_card.jpg", id_card);
    std::cout << "Student ID card saved as 'student_id_card.jpg'" << std::endl;

    cv::imshow("ID Card", id_card);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}