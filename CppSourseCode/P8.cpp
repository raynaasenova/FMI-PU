//Cylinder. �� �� ������� ��������, ����� �� ��������� ������ �� ������� ���������� (S) � ����� (V) �� �������� �� �������� ������ �� �������� � �������� �� ���������.
#include "stdafx.h"
#include<iostream>
using namespace std;
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	const double pi = 3.1415926536;
	double r, h, B, S, V;
	cout << "������ �� �������� "; 
	cin >> r;
	cout << "�������� �� ��������� ";
	cin >> h;
	B = pi*r*r;
	S = 2 * pi*r*h + 2 * B;
	V = B*h;
	cout << "���������" << endl;
	cout << "������ �� ������������ � :" << S << endl;
	cout << "������ �: " << V << endl;
}

