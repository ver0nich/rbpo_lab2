#include <iostream>
using namespace std;
double f(const double x, const double y);
void main() {
    cout << "Task6" << endl;

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
