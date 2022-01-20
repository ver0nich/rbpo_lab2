#include "task9_zotova.h"
using namespace std;
void main() {
    cout << "Task9" << endl;
    Zotova::x = 0.25;
    Zotova::y = 0.5;
    cout << "x = " << Zotova::x << "  y = " << Zotova::y << endl;
    Zotova::f();
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "f = " << Zotova::result << endl;

    cout << "X = ";
    cin >> Zotova::x;
    cout << "Y = ";
    cin >> Zotova::y;
    Zotova::f();
    cout << "f = " << Zotova::result << endl;
}