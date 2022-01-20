#include <iostream>

using namespace std;
extern double x, y, result;
void f();
void main() {
    cout << "Task7" << endl;
    x = 0.25;
    y = 0.5;
    f();
    cout << "x = " << x << "  y = " << y << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "f = " << result << endl;

    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    f();
    cout << "f = " << result << endl;
};


