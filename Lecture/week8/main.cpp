#include <iostream>

using namespace std;
int main() {
    int ** rowArray = new int[3];
    int * colArray = new int[3];
    rowArray[0] = colArray;

    // cout << dynArray[0] << endl;
    // int number = 0;

    // cout << "How many values:\n";
    // cin >> number;

    // int *dynArray = new int[number];

    // for(int i = 0; i < number; i++ ) {
    //     cout << "Enter value for " << i << endl;
    //     cin >> dynArray[i];
    // }

    // for(int i = 0; i < number; i++) {
    //     cout << i << " is " << dynArray[i] << endl;
    // }
    // delete [] dynArray;

    // int board[3][3];
    // cout << "whole board " << sizeof(board) << endl;
    // cout << "row " << sizeof(board[0]) << endl;
    // cout << "column " << sizeof(board[0][0]) << endl;
    return 0;
}