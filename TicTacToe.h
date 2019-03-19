#ifndef TICTACTOE_H
#define TICTACTOE_H
/**
 * @brief The TicTacToe class represent the game tic-tac-toe
 */
class TicTacToe {
private:
    char currentPlayer = 'X';
    char board[3][3] = {{'_', '_', '_'},
                       {'_', '_', '_'},
                       {'_', '_', '_'}};

public:
    /**
     * @brief print out the board
     */
    void print();
    /**
     * @brief getCurrentPlayer , gets current player
     * @return X or O for that player
     */
    char getCurrentPlayer();
    /**
     * @brief isDone returns where the game is won or there are not more moves
     * @return true or false
     */
    bool isDone();
    /**
     * @brief getWinner returns who won
     * @return X or O who ever one
     */
    char getWinner();
    /**
     * @brief isValidMove returns if the move can be made
     * @param row of board starting at 1
     * @param col colum of board starting at 1
     * @return true or false if it is valid or not
     */
    bool isValidMove(int row, int col);
    /**
     * @brief makeMove add an X or O to the board
     * @param row of board starting at 1
     * @param col colum of board starting at 1
     */
    void makeMove(int row, int col);
};
#endif // TICTACTOE_H
