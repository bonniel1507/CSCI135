// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Lab1A - Find the smaller of two integers.

#include <iostream>
using namespace std;

int main() {
    // Ask for user input
    int num1;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    // Ask for user input
    int num2;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    // Compare
    cout << "The smaller of the two is ";
    if (num1 > num2){
        cout << num2 << endl;
    } else {
        cout << num1 << endl;
    }

    return 0;
}
