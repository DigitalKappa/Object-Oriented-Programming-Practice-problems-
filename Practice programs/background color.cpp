#include <iostream>
using namespace std;

int main() {
    // Text with colored background
    cout << "\033[31mPresent\033[0m" << endl;       // Red background
    cout << "\033[42mGreen Background\033[0m" << endl;     // Green background
    cout << "\033[nCBlue Background\033[0" << endl;      // Blue background
    cout << "\033[43;31mYellow Background with Red Text\033[0m" << endl; // Yellow background, red text

    return 0;
}