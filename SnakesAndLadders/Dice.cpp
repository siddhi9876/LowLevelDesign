#include<bits/stdc++.h>
using namespace std;

class Dice {
    int _size;

public:

    Dice(int sizeIn) {
        srand(time(0));
        _size = sizeIn;
    }

    int roll() {
        int randomNumber = rand();
        return (randomNumber % _size) + 1;
    }
};