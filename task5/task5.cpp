#include <iostream>
#include <cmath>

using namespace std;
double x, y, result;
void f();

void main() {
    cout << "Task5" << endl;

    x = 0.25;
    y = 0.5;
    result;
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
}
void f() {
    result = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
};


