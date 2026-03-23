#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Simulated table printing
void printTable() {
    cout << "--------------------------" << endl;
    cout << "| ID |   Name   | Score  |" << endl;
    cout << "--------------------------" << endl;
    cout << "|  1 |  Alice   |  92    |" << endl;
    cout << "|  2 |  Bob     |  85    |" << endl;
    cout << "|  3 |  Charlie |  78    |" << endl;
    cout << "--------------------------" << endl;
}

// Simulated user input handling
void handleInput() {
    // Temporary prompt/input message
    cout << "Enter a value: ";
    string value;
    cin >> value;

    // Simulate some processing output
    cout << "Processing input \"" << value << "\"..." << endl;

    this_thread::sleep_for(chrono::seconds(2)); // Let the user see it

    // Now clear the 2 lines we just printed
    for (int i = 0; i < 2; i++) {
        cout << "\033[F" << "\033[2K"; // Move up and clear line
    }
}

int main() {
    printTable(); // Show table once

    while (true) {
        handleInput(); // Get and process user input without clearing the table
    }

    return 0;
}
