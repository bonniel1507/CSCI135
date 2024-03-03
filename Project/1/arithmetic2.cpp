// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1b

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    // declare variables
    char operators[5] = {'+', '-', '*', '/', '%'};
    int idx, num1, num2, ans, questions, input;
    char sign, grade;
    double percent, corrects = 0.0;

    cout << "Enter the total number of questions to ask: ";
    cin >> questions;

    while(questions <= 0){
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> questions;
    }

    for(int i = 1; i <= questions; i++){
        idx = rand() % 5;
        num1 = rand()%10;
        sign = operators[idx];
        if(sign == '+'){
            num2 = rand()%10;
            ans = num1 + num2;
        } else if(sign == '-'){
            num2 = rand()%10;
            ans = num1 - num2;
        } else if(sign == '*'){
            num2 = rand()%10;
            ans = num1 * num2;
        } else if(sign == '/'){
            num2 = 1 + rand()%9;
            ans = num1 / num2;
        } else {
            num2 = 1 + rand()%9;
            ans = num1 % num2;
        }

        cout << "(" << i << ") what is " << num1 << " " << sign << " " << num2 << "? ";
        cin >> input;

        // compare user input and answer
        if(input == ans){
            cout << "true" << endl;
            corrects += 1.0;
        } else {
            cout << "false" << endl;
        }
    }

    percent = (corrects*100 / questions);
    cout << "percentage correct: " << percent << "%" << endl;

    if(percent >= 90){
        grade = 'A';
    } else if(percent >= 80){
        grade = 'B';
    } else if(percent >= 70){
        grade = 'C';
    } else if(percent >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "letter grade: " << grade << endl;

    return 0;
}
