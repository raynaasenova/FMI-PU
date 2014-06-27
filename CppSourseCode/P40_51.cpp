// P40_51.cpp : Напишете програма за намиране на максимума на 3 числа.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y, z, max;
	cout << "x, y, z = "; cin >> x >> y >> z;
	max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	cout << "Max = " << max << endl;
}

