// p29_cilinder.cpp : �� �� ������� ��������, ����� �� ��������� ������ �� ������� ���������� � ����� �� �������� �� �������� ������ �� �������� � �������� �� ���������.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	const double pi = 3.14;
	double S, r, h, B, V;
	cout << "r = "; cin >> r;
	cout << "h = "; cin >> h;
	B = pi*r*r;
	S = 2 * pi*r*h + 2 * B;
	V = B*h;
	cout << "S = "<<S<<endl;
	cout << "V = "<<V<<endl;

	return 0;
}

