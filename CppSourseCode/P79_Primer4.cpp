// P79_Primer4.cpp : �� �� ������� �����������, ����� �� �������� ��� ������ ����� �� ����� (���� � ������������).
//�� ���������� ��� �������� ����������-����������.

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

void calc(float x, float y, float &s, float &pr)
{
	s = x + y;
	pr = x*y;
}

int main()
{
	SetConsoleOutputCP(1251);
	float a, b, c = 0, d = 0;
	cout << "a, b = "; cin >> a >> b;
	calc(a, b, c, d);
	cout << "���� = "<<c<<endl;
	cout << "������������ = "<<d<<endl;
}