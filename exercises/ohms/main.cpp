#include <iostream>

using namespace std;

int main() {
    double ohms = 0.0;
    double resValues = 0.0;
    int resistors[] = {5,7,2};
    for(int i = 0; i < 3; i++) {
        double res = 1.0 / resistors[i];
        resValues += res;
    }
    ohms = 1.0 / resValues;
    cout << ohms << endl;
}