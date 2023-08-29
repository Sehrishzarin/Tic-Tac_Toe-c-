// Tic-Tac_Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int space[3][3] = { {1,2,3}, {4,5,6},{7,8,8} };
int row;
int colmn;
char token;
bool tie;
string n1 = "";
string n2 = "";
void printBoard() {
    cout << "      |    |      \n" << endl;
    cout << "  " << space[0][0] << "   | " << space[0][1] << "  |   " << space[0][2] << endl;
    cout << "      |    |      \n" << endl;
    cout << "______|____|______\n" << endl;
    cout << "      |    |      \n" << endl;
    cout << "  " << space[1][0] << "   | " << space[1][1] << "  |   " << space[1][2] << endl;
    cout << "      |    |      \n" << endl;
    cout << "______|____|______\n" << endl;
    cout << "      |    |      \n" << endl;
    cout << "  " << space[2][0] << "   | " << space[2][1] << "  |   " << space[2][2] << endl;
    cout << "      |    |      \n" << endl;
    cout << "      |    |      \n" << endl;
}
void makeMove() {
    int digit;

    if (token == 'x') {
        cout << n1 << ", please enter a number: ";
    }
    else if (token == '0') { // Change '0' to 'o'
        cout << n2 << ", please enter a number: ";
    }

    cin >> digit;

    if (digit >= 1 && digit <= 9) {
        row = (digit - 1) / 3;
        colmn = (digit - 1) % 3;

        if (space[row][colmn] != 'x' && space[row][colmn] != 'o') { // Change '0' to 'o'
            space[row][colmn] = token;
            token = (token == 'x') ? 'o' : 'x'; // Change '0' to 'o'
        }
        else {
            cout << "That space is already occupied. Please choose another." << endl;
            makeMove();
        }
    }
    else {
        cout << "Invalid option. Please enter a number between 1 and 9." << endl;
        makeMove();
    }
}

bool check() {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] ||
            space[0][i] == space[1][i] && space[0][i] == space[2][i]) {
            return true;
        }
    }

    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] ||
        space[0][2] == space[1][1] && space[1][1] == space[2][0]) {
        return true;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'x' && space[i][j] != '0') {
                return false;
            }
        }
    }

    tie = true;
    return false;
}



int main()
{
    cout << "Enter the name of the First player: ";
    getline(cin, n1);
    cout << "Enter the name of the Second player: ";
    getline(cin, n2);
    cout << n1 << " is Player 1, and " << n2 << " is Player 2." << endl;

    while (!check()) {
        printBoard();
        makeMove();
    }
    printBoard();

    if (token == 'x' && !tie) {
        cout << n2 << " wins!" << endl;
    }
    else if (token == '0' && !tie) {
        cout << n1 << " wins!" << endl;
    }
    else {
        cout << "The game is a tie!" << endl;
    }

    return 0;

}

