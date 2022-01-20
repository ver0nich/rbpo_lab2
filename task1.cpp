#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    cout << "Task1" << endl;
    double x = 0.25;
    double y = 0.5;
    cout << "x = " << x << "  y = " << y << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    double f = pow((cos(x) - cos(y)), 2) - pow((sin(x)-sin(y)), 2);
    cout << "f = " << f << endl;

    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    f = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
    cout << "f = " <<f << endl;

    
}
