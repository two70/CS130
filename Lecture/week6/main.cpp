#include <iostream>

using namespace std;

void printScreen() {
    string body_parts[6] = {"O", "/", "\\", "|", "/", "\\"};
    for(int i = 0; i < 6; i++) {
        cout << body_parts[i] << endl;
    }
    for(string part: body_parts){
        cout << part << endl;
    }
    int i = 0;
    while(true){
        cout << body_parts[i];
        i++;
        if(i == 6){
            break;
        }
    }
    string head = "O";
    string l_arm = "/";
    string r_arm = "\\";
    string l_leg = "/";
    string r_leg = "\\";


    string line1 = "----------------\n";
    string line2 = "\t|\t\n";
    string line3 = "|\t" + head + "\n";

    // cout << line1 << line2 << line3;
}

int game_loop(){
    string guesses[7] = {};
    string words_to_guess_from[10] = {"truck", "school"};
}
int main() {
    // string my_string = "this is a  \t     sentance";

    // for(char c: my_string) {
    //     if(int(c) == 32 or int(c) == 9){
    //         continue;
    //     }
    //     cout << c << " is " << int(c) << "\t";
    // }]
    // i loops over rows
    // for(int i = 0; i < 10; i++){
    //     //j loops over columns
    //     for(int j = 9; j > 0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // string quit = "";
    // bool wantsToQuit = false;

    // while(not wantsToQuit){
    //     cout << "Want to quit?\n";
    //     cin >> quit;
    //     if(quit == "y" or quit == "Y"){
    //         wantsToQuit = true;
    //         cout << "Have a nice day!\n";
    //     }
    //     cin.ignore(1000, '\n');
    // }

    printScreen();
    return 0;
}