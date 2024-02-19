#include <iostream>
#include <cassert>

using namespace std;

template<class T1, class T2, class T3>
T3 sum(T1 newVal, T2 &total) {
    return total += newVal;
}

void test() {
    int newVal = 2, total = 2; 
    assert((sum<int, int, int>(newVal, total) == 4));

    cout << "Test passed" << endl;
}

int main() {
    int numberOfInputs = 0;
    string total = "";
    cin >> numberOfInputs;
    test();

    for(int i = 0; i < numberOfInputs; i++) {
        string nextNumber = "";
        cin >> nextNumber;
        sum<string,string,string>(nextNumber, total);
    }
    cout << "Total = " << total << endl;
    // cout << numberOfInputs << endl;
}