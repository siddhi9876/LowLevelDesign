#include<bits/stdc++.h>
#include "Snake.cpp"
#include "Ladder.cpp"
using namespace std;

class Board {
public:
    vector<Snake>snakes;
    vector<Ladder>ladders;
    int boardSize = 0;

    Board(int boardSizeIn, vector<pair<int, int>>snakesIn, vector<pair<int, int>>laddersIn ) {
        boardSize = boardSizeIn;
        
        //Initialize Snakes
        for(int i =0; i < snakesIn.size(); i++) {
            Snake s = Snake(snakesIn[i].first, snakesIn[i].second);
            snakes.push_back(s);
        }

        //Initialize Ladders
        for(int i = 0; i< laddersIn.size(); i++) {
            Ladder l = Ladder(laddersIn[i].first, laddersIn[i].second);
            ladders.push_back(l);
        }
    }

    /*
        find final position of player if player lands at curr position
    */
    int findFinalPosition(int currPosition, int steps) {

        //Check if the move is valid else return initial position only
        if((currPosition + steps) > boardSize) {
            return currPosition;
        }

        int finalPosition = currPosition + steps;
        
        //assuming ladders and snake start doesn't collide
        //In case collide, ladder is given priority
        //consecutive ladders or snake not allowed as of now
        for(int i = 0; i < ladders.size(); i++) {
            if(finalPosition == ladders[i].getStart()) {
                finalPosition = ladders[i].getEnd();
                return finalPosition;
            }
        }

        for(int i = 0; i < snakes.size(); i++) {
            if(finalPosition == snakes[i].getStart()) {
                finalPosition = snakes[i].getEnd();
                return finalPosition;
            }
        }

        return finalPosition;
    }
    
    /*
        check winner for player p
    */
   bool checkWinner(int currPosition) {
        return currPosition == boardSize;
   }

   //Write getters
};