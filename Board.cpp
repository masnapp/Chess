//
// Created by mike on 9/14/15.
//

#include "Board.h"
#include <iostream>
#include <sstream>

void Board::makeBoard(Player player1, Player player2)
{
    char Letter = 'A';
    std::string letter;
    std::stringstream stream;
    for (int i = 0; i < 8; i++) {
        Letter += i;
        stream << Letter;
        stream << letter;

        for (int j = 0; j < 8; j++) {
            board[i][j] = letter;
            }
        }
    }
}