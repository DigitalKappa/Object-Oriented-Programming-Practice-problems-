#include <iostream>
#include <windows.h> // Windows-specific header

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    setColor(212); // Green text
    std::cout << "This is green text!" << std::endl;

    setColor(12); // Red text
    std::cout << "This is red text!" << std::endl;

    setColor(7); // Reset to default (white text)
    std::cout << "Back to normal." << std::endl;

    return 0;
}