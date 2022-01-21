#include <iostream>
#include "task9_zotova.h"
double Zotova::x, Zotova::y, Zotova::result;
 void Zotova::f() {
	result = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
};
