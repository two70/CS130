#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

enum COLOR {RED = 22, BLUE = 11, GREEN, YELLOW, PURPLE};

namespace MY_SPACE {
    const float PI = 3.14156;
    const double G = 6.67384e-11; // gravitional force in cubic meter per second squared per kilogram
    const double c = 2.99792458e8; // speed of light in vacuum in meter per second
    string first_name = "Jake";
    string last_name = "Smith";
}

using namespace MY_SPACE;

int main() {
    string myobject;
    myobject = to_string(189);
    cout << myobject << endl;
    return 0;
}