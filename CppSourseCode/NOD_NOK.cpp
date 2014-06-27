// NOD_NOK.cpp : Да се състави функция, изчисляваща НОД на 2 естествени числа. С нейна помощ да се изчисли НОК ня произволен брой естествени числа (за край на въвеждането - 0).  
//НОД и НОК. Алгоритъм на Евклид
//При използването на големи или взаимно прости числа НОК може да надхвърли диапазона на типа int. За тази цел заменете int с long. 

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int nod (int a, int b)
{
	while (a != b)
	
	if (a > b)
		a = a - b;
	else
		b = b - a;
	return a;
}

int nok(int a, int b)
{
	return a*b / nod(a, b);
}

void main()
{
	SetConsoleOutputCP(1251);
	int x, y, z;
	do
	{		
		cout << "Въведете естествено число: "; cin >> x;
	}
		while (x < 0);
		z = x;
		cout << "Въведете следващо число (0 за край): " << endl;
		do
		{
			cout << "Следващо число: "; cin >> y;
			if (y>0)
			{
				z = nok(z, y);
				x = nod(x, y);
			}
		}
			while (y > 0);
			cout << "НОД е : " << x << endl;
			cout << "НОК е : " << z << endl;
}