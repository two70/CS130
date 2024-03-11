#include <iostream>

using namespace std;
int main() {
    // int * dynArray = new int[3];
    // dynArray[0] = 10;

    // cout << dynArray[0] << endl;
    int number = 0;

    cout << "How many values:\n";
    cin >> number;

    int *dynArray = new int[number];

    for(int i = 0; i < number; i++ ) {
        cout << "Enter value for " << i << endl;
        cin >> dynArray[i];
    }

    for(int i = 0; i < number; i++) {
        cout << i << " is " << dynArray[i] << endl;
    }
    delete [] dynArray;
    return 0;
}