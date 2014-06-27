// P33_28.cpp 
//Да се пресметне стойността на израза:
//x*x + y*y <= 4 при x = 0.6, y = -1.2

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double x = 0.6;
	double y = -1.2;
	bool result = x*x + y*y <= 4;
	cout << result << endl;
	system("PAUSE");
}

