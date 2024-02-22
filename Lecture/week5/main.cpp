#include <iostream>

using namespace std;

int addNums(int num1, int num2) {
    int sum = 0;
    sum = num1 + num2;
    printf("In addNums:\n");
    printf("Addresses: num1=%p num2=%p sum=%p\n", &num1, &num2, &sum);
    printf("Values: num1=%d num2=%d sum=%d\n", num1, num2, sum);
    sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2, sum;
    num1 = 42;
    num2 = 15;
    sum = addNums(num1, num2);
    cout << "\nsum: " << sum << endl;
}
