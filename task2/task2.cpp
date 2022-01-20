#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double y) {
    return  pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
}

void main() {
    cout << "Task2" << endl;

    double x = 0.25;
    double y = 0.5;
    cout << "x = " << x << "  y = " << y << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "f = " << f(x, y) << endl;

    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "f = " << f(x, y) << endl;
}