#include <iostream>

using namespace std;
int main() {
    string my_string = "this is a  \t     sentance";

    for(char c: my_string) {
        if(int(c) == 32 or int(c) == 9){
            continue;
        }
        cout << c << " is " << int(c) << "\t";
    }
    return 0;
}