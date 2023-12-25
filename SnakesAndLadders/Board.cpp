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
    int findFinalPosition(int currPosition) {
        //TODO: Write logic
        return 10;
    }
    
    /*
        check winner for player p
    */
   bool checkWinner(int currPosition) {
        return currPosition == boardSize;
   }

   //Write getters
};