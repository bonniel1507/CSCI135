// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: lab 12b

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    return v;
}

vector<int> goodVibes(const vector<int> v){
    vector<int> e;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            e.push_back(v[i]);
        }
    }
    return e;
}

int main() {
// comment
// comment
    return 0;
}
