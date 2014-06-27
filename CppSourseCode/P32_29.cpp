// P32_29.cpp : Да се напише програма, която въвежда два различни знака, намира и извежда този с по-голям код.
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
	cout << "Знакът с по-голям код е :" << (c1>c2 ? c1 : c2);
	cout << "\n";
	system("PAUSE");
}
