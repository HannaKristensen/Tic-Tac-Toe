/** @authors Hanna Kristensen, Osama Alrawaili
 *  @brief all the functions for TicTacToe.h file
 */
#include <istream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

#include "TicTacToe.h"

void TicTacToe::print(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<< board[i][j];
        }
        std::cout<<'\n';
    }
};

char TicTacToe::getCurrentPlayer(){
    return currentPlayer;
};


bool TicTacToe::isDone(){
    int keep = 0;
    bool num = false;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != '_'){
                keep++;
                           //will be true if there is no blank space
            }
        }
    };
    if(keep == 9){
        num = true;}


std::string same = ""; //erase the string so we can use it again

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           same += board[i][j];             //adding the top line into a string
        }
        if(same == "XXX"){                  //asking if the string is the same
            num = true;
            break;}

        if(same == "OOO"){
            num = true;
            break;}

        same.erase(0); //erase the string to use again for the next line
    }

    if(num == true)
        return num;     //asking if it is true so we don't have to check anything more

    same.erase(0); //erasing it to use it for the next check

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           same += board[j][i];         //adding the letter to a string for the colum
        }
        if(same == "XXX"){
            num = true;
            break;}

        if(same == "OOO"){
            num = true;
            break;}

        same.erase(0, 3);    //erasing it to use again for the next row
    }

    if(num == true)
        return num;         //asking if it true so we don't have to check anything else

    same.erase(0);      //erasing it to use it again in a new check
    same += board[0][0];    //looking to see if the diagnal is won
    same += board[1][1];
    same += board [2][2];

    if(same == "XXX")
        num == true;

    if(same == "OOO")
        num == true;

    if(num == true)
        return num;

    same.erase(0);

    same += board[0][2];
    same += board[1][1];
    same += board[2][0];

    if(same == "XXX")
        num == true;

    if(same == "OOO")
        num == true;

    if(num == true)
        return num;
};

char TicTacToe::getWinner(){
    std::string same = "";      //almost the same code to check isDone, somethings are left out
    char player;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
               same += board[i][j];
            }
            if(same == "XXX"){
                player = 'X';
                break;}

            if(same == "OOO"){
                player = 'O';
                break;}

            same.erase(0);
        }


        same.erase(0);

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
               same += board[j][i];
            }
            if(same == "XXX"){
                player = 'X';
                break;}

            if(same == "OOO"){
                player = 'O';
                break;}

            same.erase(0, 3);
        }



        same.erase(0);
        same += board[0][0];
        same += board[1][1];
        same += board [2][2];

        if(same == "XXX")
            player = 'X';


        if(same == "OOO")
            player = 'O';


        same.erase(0);

        same += board[0][2];
        same += board[1][1];
        same += board[2][0];

        if(same == "XXX")
            player = 'X';


        if(same == "OOO")
            player = 'O';


            return player;
}

bool TicTacToe::isValidMove(int row, int col){
bool valid;
    if(board[row - 1][col - 1] == '_')
        valid = true;

    else valid = false;

    return valid;


};

void TicTacToe::makeMove(int row, int col){

board[row - 1][col - 1] = currentPlayer;

    if(currentPlayer == 'X'){
        currentPlayer = 'O';}


    else if(currentPlayer == 'O'){
        currentPlayer = 'X';}




};
