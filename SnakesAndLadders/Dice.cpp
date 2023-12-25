#include<bits/stdc++.h>
using namespace std;

class Dice {
    int _size;

public:

    Dice(int sizeIn) {
        _size = sizeIn;
    }

    int roll() {
        int randomNumber = rand();
        return randomNumber % _size;
    }
};