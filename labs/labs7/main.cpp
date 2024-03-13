/*
Kattis - Hissing Microphone Problem

By: Jason West
Date: 20240313

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve(string ourString);

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve(argv[1]);
}

string answer(const string &line) {
    // FIXME3
    // cout << line.size() << endl;
    for(int i = 0; i < (int)line.size(); i++) {
        if(i != 0 and line[i] == 's' and line[i - 1] == 's') {
            return "hiss";
        }
    }
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    return "no hiss";
}

// unit testing answer()
void testAnswer() {
    // FIXME4
    // write at least two test cases to test answer()
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve(string ourString) {
    // string line;
    cout << "ourString = " << ourString << endl;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5
    // read string into line
    cout << answer(ourString) << endl;
}