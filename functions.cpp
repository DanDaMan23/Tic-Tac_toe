#include <iostream>
#include "functions.hpp"
#include <vector>

bool determined_winner(std::vector<char> board) {
    return (board[0] == board[1] && board[0] == board[2]) || (board[0] == board[3] && board[0] == board[6]) ||
        (board[0] == board[4] && board[0] == board[8]) || (board[1] == board[4] && board[1] == board[7]) ||
        (board[2] == board[5] && board[2] == board[8]) || (board[3] == board[4] && board[3] == board[5]) ||
        (board[6] == board[7] && board[6] == board[8]) || (board[2] == board[4] && board[2] == board[6]);
}

void print_board(std::vector<char> board) {

    for (int i = 0; i <= 2; i++) {
        std::cout << board[i] << " ";
    }
    std::cout << "\n";

    for (int i = 3; i <= 5; i++) {
        std::cout << board[i] << " ";
    }
    std::cout << "\n";

    for (int i = 6; i <= 8; i++) {
        std::cout << board[i] << " ";
    }
    std::cout << "\n\n";
}

bool valid_move(int move_pos, std::vector<char> board) {
    return (board[move_pos] != 'X' && board[move_pos] != 'O') && (move_pos >= 0 && move_pos <= 8);
}