// P79_Primer4.cpp : Да се направи подпрограма, която по зададени две реални числа да връща (сума и произведение).
//Ще използваме два формални параметъра-псевдоними.

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
	cout << "Сума = "<<c<<endl;
	cout << "Произведение = "<<d<<endl;
}