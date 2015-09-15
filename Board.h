//
// Created by mike on 9/14/15.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <string>
#include "Player.h"


class Board
{
public:
    void makeBoard(Player player1, Player player2);
private:
    std::string board[8][8];
};


#endif //CHESS_BOARD_H
