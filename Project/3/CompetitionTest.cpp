#include <iostream>
#include <string>
#include "Competition.hpp"
using namespace std;

int main() {
    Competition race;
    race.play();

    vector<int> harePattern{-3, 2, 0, 0, 6};
    Hare hare(harePattern, 0);

    vector<int> torPattern{1, 1, 2, -2, 3};
    Tortoise tor(torPattern, 5);

    Competition race2(hare, tor, 30);
    race2.play();
    return 0;
}
