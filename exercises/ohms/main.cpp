#include <iostream>

using namespace std;

double resCalculator(double r1, double r2) {
    return r1 + r2;
}

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

    double result;

    result = resCalculator(2.0, 3.0);
    cout << "Result " << result << endl;

    return 0;
}