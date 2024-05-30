
#include <iostream>
#include<string>

#define horizontal 0
#define vertical 1


char board[10][10];
std::string words[10];

bool checkValid(char board[10][10], std::string word, int row, int col, int direct) {
    int length = word.length();

    for (int i = 0; i < length; i++) {

        if (direct == horizontal) {
            if (col + length > 10) return false;
            if (board[row][col + i] != '-' && board[row][col + i] != word[i]) {
                return false;
            }
        }
        else {
            if (row + length > 10) return false;
            if (board[row + i][col] != '-' && board[row + i][col] != word[i]) {
                return false;
            }
        }
    }

    return true;
}

void fillWord(char board[10][10], char new_board[10][10], std::string word, int row, int col, int direct) {
    int length = word.length();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            new_board[i][j] = board[i][j];
        }
    }


    for (int i = 0; i < length; i++) {

        if (direct == horizontal) {
            new_board[row][col + i] = word[i];
        }
        else {
            new_board[row + i][col] = word[i];
        }
    }

}


bool solve(char board[10][10], std::string words[10], int words_size, int word_index) {
    if (word_index == words_size) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << board[i][j];
            }
            std::cout << std::endl;
        }
        return true;
    }

    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {

            char new_board[10][10];

            if (checkValid(board, words[word_index], i, j, horizontal)) {

                fillWord(board, new_board, words[word_index], i, j, horizontal);

                if (solve(new_board, words, words_size, word_index + 1)) {
                    return true;
                }
            }

            if (checkValid(board, words[word_index], i, j, vertical)) {
                fillWord(board, new_board, words[word_index], i, j, vertical);

                if (solve(new_board, words, words_size, word_index + 1)) {
                    return true;
                }
            }
        }
    }

    return false;
}


int main()
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cin >> board[i][j];
        }
    }

    std::string crossword_item;
    std::cin >> crossword_item;
    crossword_item += ";";

    std::string s = "";
    int words_size = 0;
    for (char c : crossword_item)
    {
        if (c == ';')
        {
            words[words_size] = s;
            words_size++;
            s = "";
        }
        else
        {
            s += c;
        }
    }
    int word_index = 0;
    solve(board, words, words_size, word_index);

    return 0;
}