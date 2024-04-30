#include <iostream>

using namespace std;

struct Student {
    float gpa = 0.0;
    string firstName = "John";
    string lastName = "Dow";
    int studentid = 7001;
};
struct Point {
    int x;
    int y;
};

Point getPoint() {
    Point pt;
    cout << "Enter a point in (x, y) format: ";
    cin >> pt.x >> pt.y;
    return pt;
}


struct Car {
    int wheelNumber;
    string color;
};

void printStudent(float & fl) {
    cout << fl;
    // cout << "GPA = " << st.gpa << endl;
    // cout << "Firstname = " << st.firstName << endl;
    // cout << "Lastname = " << st.lastName << endl;
    // cout << "Student ID = " << st.studentid << endl;
}

int main() {
    struct Student st1;
    struct Student st2;
    Student st3 = {3.0,"bob", "builder", 543};
    Point pt2 = getPoint();
    Point pt3 = getPoint();
    Point pt4 = getPoint();
    Point pt5 = getPoint();

    st1.gpa = 4.0;
    st2.gpa = 1.5;

    // float fl = 3.2;
    // printStudent(fl);
    // printStudent(st3);
    // cout << st3 << endl;
    // cout << st3.studentid << endl;
    return 0;
}