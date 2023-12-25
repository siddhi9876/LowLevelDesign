#include<bits/stdc++.h>
#include "Game.cpp"
using namespace std;


int main() {

    int boardSizeIn = 100;
    int diceSize = 6;
    vector<pair<int,int>>snakes = {{37, 3}, {48, 16}, {28, 10}, {96, 42}, {94, 71}, {75, 32}};
    vector<pair<int, int>>ladders = {{41, 79}, {22, 58}, {4, 56}, {14, 55}, {12, 50}, {54, 88}};
    vector<string>players = {"P1", "P2"};


    Game g = Game(boardSizeIn, players, snakes, ladders, diceSize);
    g.play();
}