// P90_158.cpp : �������� ������� reduce(a,b,c,d) � ���� ������, ����� �� �������� ������ a/b(a �������� �� 0,b �������� �� 0) � ����������� p/q. ��������� �� �� � ���� �����������: reduce(k+1, 14, n, 7) � reduce(k, sqrt(36), k, n)

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

long nod(long a, long b)
{
	while (a != b)
		if (a > b)
			a = a - b;
		else b = b - a;
		return a;
}

void Reduce(long a, long b, long &p, long &q)
{
	long Divisor = nod(a, b);
	p = a / Divisor;
	q = b / Divisor;
}
void main()
{
	SetConsoleOutputCP(1251);
	long Num, Denom, p, q; char Znak;
	
	do {cout << "������ ��������: "; cin >> Num;}
	while (Num == 0);
	
	do { cout << "�������� ����������: "; cin >> Denom; } 
	while (Denom == 0);

	if (Num*Denom >= 0)
		Znak = ' ';
	else
		Znak = '-';
	Num = abs(Num);
	Denom = abs(Denom);
	Reduce(Num, Denom, p, q);
	
	cout << "������������ ����: "<<Znak<<Num<<'/'<<Denom<<"��������� ����: "<<Znak<<p<<'/'<<q<<endl;
	}
