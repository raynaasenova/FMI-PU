// P32_29.cpp : �� �� ������ ��������, ����� ������� ��� �������� �����, ������ � ������� ���� � ��-����� ���.
// ZAD1.cpp
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	char c1, c2;
	cout << "c1="; cin >> c1;
	cout << "c2="; cin >> c2;
	cout << "������ � ��-����� ��� � :" << (c1>c2 ? c1 : c2);
	cout << "\n";
	system("PAUSE");
}
