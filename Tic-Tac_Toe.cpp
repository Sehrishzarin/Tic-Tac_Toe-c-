// Tic-Tac_Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


int main()
{
    int space[3][3] = { {1,2,3}, {4,5,6},{7,8,8} }; 
    string n1, n2;
    cout << "Enter the Name of the First player : " << endl;
    getline(cin, n1);
    cout << "Enter the name of the Second player : " << endl;
    getline(cin, n2);
    cout << n1 << " is Player 1, So he/she will play first" << endl;
    cout << n2 << " is Player 2, So he/she will play second" << endl;

    cout << "      |    |      \n" << endl;
    cout << "  " << space[0][0] << "   | " << space[0][1] << "  |   "<<space[0][2]<<endl;
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
