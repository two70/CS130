#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names

void printDisplay(char board[3][3]) {
    cout << "--0---1---2--\n";

    for(int row = 0; row < 3; row++){
        cout << row << " ";
        for(int col = 0; col < 3; col++){
            cout << board[row][col] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool checkForWin(char board[3][3]) {
    for(int i = 0; i < 3; i++){
        if(board[i][0] != ' ' and (board[i][0] == board[i][1] and board[i][0] == board[i][2])) {
            cout << "Winner winner chicken dinner\n";
            return true;
        }
        if(board[0][i] != ' ' and (board[0][i] == board[1][i] and board[0][i] == board[2][i])) {
            cout << "Winner winner chicken dinner\n";
            return true;
        }
    }
    return false;
}

//main entry point of the program
int main() {
    char board[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } };
    char player = 'X'; 
    for(int i = 0; i < 9; i++) {
        printDisplay(board);
        int row = 0;
        int col = 0;
        while(true){
            cout << "Enter a guess, in the form of 'row column':\n";
            cin >> row >> col;
            if(board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 3) {
                cout << "Please try again\n";
                cin.ignore(1000, '\n');
            }
            else {
                break;
            }
        }
        board[row][col] = player;

        if(checkForWin(board)) {
            cout << "Player " << player << " Wins!\n";
            printDisplay(board);
            break;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    cout << " Nobody won! ";
}