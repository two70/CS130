#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {

    string file_path = "./inputfile.txt";
    string data = "";
    fstream file;
    file.open(file_path, file.in | file.binary | file.ate);
    if (!file.is_open()) {
        cout << "file BAD" << endl;
    }
    else {
        cout << "size = " << file.tellg() << endl;
        getline(file, data);
        cout << "data = " << data << endl;
    }
    file.close();
    return 0;
}