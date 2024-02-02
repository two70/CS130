
#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main() {
    int H = 0; 
    int M = 0;
    cout << "Enter two numbers seperated by space" << endl;
    cin >> H >> M;
    // cout << H << " " << M << endl;
    int totalMinutes = 0;
    totalMinutes = (H * 60) + M;
    // cout << totalMinutes << endl;
    totalMinutes = totalMinutes - 45;
    if(totalMinutes < 0) {
        totalMinutes = 1440 + totalMinutes;
    }
    H = totalMinutes / 60;
    M = totalMinutes - (H * 60);
    cout << "Hours = " << H << " Minutes = " << M << endl;

}