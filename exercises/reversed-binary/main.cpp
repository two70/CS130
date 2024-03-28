#include <iostream>
#include <cmath>

using namespace std;

string binary(unsigned int &decimal) {
    const int divisor = 2;
    int dividend;
    int quotient, remain;
    string answer = "";
    quotient = decimal;

    while(quotient != 0) {
        dividend = quotient;
        remain = dividend % divisor;
        quotient = dividend / divisor;

        answer = to_string(remain) + answer;
    }
    if (answer.empty())
        return "0";

    return answer;
}

unsigned int decimal(string &binary) {
    int answer = 0;
    int digitCount = binary.size();
    for(int i = 0; i < digitCount; i++){
        if (binary[i] == '0') continue;
        int placeValue = digitCount - i - 1;
        answer += pow(2.0, placeValue);
    }
    return answer;
}

string reversed(string &binary) {

}

int main() {
    int input;
    cin >> input;

    string result = binary(input);
    string reversed = reversed(result);
    int int_result = decimal(reversed);

    cout << int_result << endl;

    return 0;
}