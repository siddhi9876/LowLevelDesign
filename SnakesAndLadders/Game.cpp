#include<bits/stdc++.h>
#include "Board.cpp"
#include "Player.cpp"
using namespace std;

class Game {
public:

    Board board;
    vector<Player> players;
    Dice d;

    Game(int boardSizeIn, vector<string>players, vector<pair<int,int>> snakes, vector<pair<int,int>> ladders, int diceSize): 
    board(boardSizeIn, snakes, ladders), d(diceSize) {
        
        //Initialize Players object
        for(int i = 0; i < players.size(); i++ ) {
            Player p = Player(players[i]);
        }
    };

    void play() {
        string winner = ""; 
        while(winner == "") {
            for(int i = 0; i < players.size(); i++) {
                int currSteps = players[i].rollDice(d);
                int currPosition = players[i].getCurrPosition() + currSteps;
                int finalPosition = board.findFinalPosition(currPosition);
                players[i].moveToPosition(finalPosition);

                if(board.checkWinner(finalPosition)) {
                    winner = players[i].getName();
                }
            }
        }

        cout <<"Winner is Player: " <<winner<<endl;
    }

};