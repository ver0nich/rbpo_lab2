#pragma once
#include <iostream>

namespace Zotova {
	extern double x, y, result;

	static void f() {
		result = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
	};
}