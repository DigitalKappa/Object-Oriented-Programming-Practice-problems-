#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string phoneNumber;
    string address;

public:
    Student(string n, int roll, string phone, string addr) {
        name = n;
        rollNumber = roll;
        phoneNumber = phone;
        address = addr;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;

    }
};

int main() {
 
    Student sam("Sam", 101, "0305-6522245", "Suraj Miani Multan.");
    Student john("John", 102, "0300-8525593", "MDA chock Multan");

    cout << "Student Details:" << endl;

    sam.display();
    john.display();

    return 0;
}