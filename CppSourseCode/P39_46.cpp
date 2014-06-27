// P39_46.cpp : Да се състави фрагмент от програма, с която се пресмята стойността на функцията y=7*x(за x >= 0) и y=3,5*x(за x< 0).
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x = "; cin >> x;
	y = 7 * x;
	if (x < 0) y = 3.5*x;
	cout << x << ' ' << y<<endl;
}

