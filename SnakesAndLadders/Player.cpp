#include<bits/stdc++.h>
#include "Dice.cpp"
using namespace std;

class Player {
    string name;
    vector<int>moves;
    int currPosition;

public:

    Player(string nameIn) {
        name = nameIn;
        currPosition = 0;
    }

    int rollDice(Dice d) {
        return d.roll();
    }

    void moveToPosition (int position) {
        currPosition = position;
        moves.push_back(position);
    }

    int getCurrPosition() {
        return currPosition;
    }

    string getName() {
        return name;
    }

    void printMoves() {
        cout << "Output Player: "<< name <<" Steps: "<<endl;
        for(int i = 0; i < moves.size(); i++) {
            cout<<moves[i]<<" ";
        }

        cout<<endl;
    }
};