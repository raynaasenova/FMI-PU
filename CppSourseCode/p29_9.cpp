// p29_9.cpp 
//Да се намери стойността на променливата y=max(x1,x2), където х1 и х2 са различни числа 
//по формулата max(x1,x2)=0.5*(x1+x2+|x1-x2|).

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double x1, x2, y;
	cout << "x1, x2 = "; cin >> x1 >> x2;
	y = 0.5*(x1 + x2 + fabs(x1 - x2));
	cout << "По-голямото число е : "<<y<<endl;
	system("PAUSE");
}

