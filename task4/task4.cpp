#include <iostream>
#include <cmath>

using namespace std;

void f(const double &x,const double &y,double &result);

void main() {
    cout << "Task4" << endl;

    double x = 0.25;
    double y = 0.5;
    double result;
	f(x, y, result);
    cout << "x = " << x << "  y = " << y << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "f = " << result << endl;

    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    f(x, y, result);
    cout << "f = " << result << endl;
}
void f(const double &x, const double &y, double &result) {
    result = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
};


