// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1a

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    // declare variables
    char operators[] = {'+', '-', '*', '/', '%'};
    int num1 = rand()%10;
    char sign = operators[rand()%5];
    int num2;
    int ans;
    // if()

    // checking the sign for next step
    if(sign == '+'){
        num2 = rand()%9;
        ans = num1 + num2;
    } else if(sign == '-'){
        num2 = rand()%9;
        ans = num1 - num2;
    } else if(sign == '*'){
        num2 = rand()%9;
        ans = num1 * num2;
    } else if(sign == '/'){
        num2 = rand()%8+1;
        ans = num1 / num2;
    } else if(sign == '%'){
        num2 = rand()%8+1;
        ans = num1 % num2;
    }
    
    int input;
    cout << "What is " << num1 << " " << sign << " " << num2 << "? ";
    cin >> input;

    // compare user input and answer
    if(input == ans){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}