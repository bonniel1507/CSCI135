// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1c

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("problems.csv");
    if(fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string txt, ans;
    double numQuestions = 0, numCorrect = 0;

    while(getline(fin, txt, ',') && getline(fin, ans)){
        numQuestions += 1;

        // display question
        double input;
        cout << "(" << numQuestions << ") what is " << txt << "? ";
        cin >> input;

        // compare user input and answer
        if(input == stof(ans)){
            cout << "true\n" << endl;
            numCorrect += 1;
        } else {
            cout << "false\n" << endl;
        }
    }
    fin.close();

    // percentage
    double percent;
    percent = (numCorrect*100 / numQuestions);
    cout << "percentage correct: " << percent << "%" << endl;

    // letter grade
    char grade;
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
