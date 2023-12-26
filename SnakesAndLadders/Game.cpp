#include<bits/stdc++.h>
#include "Board.cpp"
#include "Player.cpp"
using namespace std;

class Game {
public:

    Board board;
    vector<Player> players;
    Dice d;

    Game(int boardSizeIn, vector<string>playersIn, vector<pair<int,int>> snakes, vector<pair<int,int>> ladders, int diceSize): 
    board(boardSizeIn, snakes, ladders), d(diceSize) {
        
        //Initialize Players object
        for(int i = 0; i < playersIn.size(); i++ ) {
            Player p = Player(playersIn[i]);
            players.push_back(p);
        }
    };

    void play() {
        if(players.size() == 0) {
            cout<<"No players to play ..."<<endl;
            return;
        }

        int winner = -1; 
        while(winner == -1) {
            for(int i = 0; i < players.size(); i++) {
                //TODO: Add Console log
                cout <<"Its turn of Player: "<<players[i].getName()<<" with curr position: "<<players[i].getCurrPosition()<<endl;

                int currSteps = players[i].rollDice(d);
                int finalPosition = board.findFinalPosition(players[i].getCurrPosition(), currSteps);
                players[i].moveToPosition(finalPosition);

                if(board.checkWinner(finalPosition)) {
                    winner = i;
                }

                cout<<"Player: "<<players[i].getName()<<" landed on: "<<players[i].getCurrPosition()<<endl;
            }
        }

        outPutWinner(winner);
    }

    void outPutWinner(int winner) {
        cout <<"* * * * * * * * * Winner is Player: " <<players[winner].getName()<<"* * * * * * * * *"<<endl;
        players[winner].printMoves();
        cout<<"Other Players Moves"<<endl;

        for(int i =0; i< players.size(); i++) {
            if(i != winner) players[i].printMoves();
        }
    }

};