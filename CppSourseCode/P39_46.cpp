// P39_46.cpp : �� �� ������� �������� �� ��������, � ����� �� �������� ���������� �� ��������� y=7*x(�� x >= 0) � y=3,5*x(�� x< 0).
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

