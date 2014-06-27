//Да се намери сумата и средноаритметичното на 10 въведени числа от клавиатурата.

#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int i;
	double x, s = 0, sr; //Сума
	for (i = 1; i <= 10; i++)
	{
		cout << "Въведете поредно число: "<<endl;
		cin >> x;
		s += x; //към променливата се добявя стойността на x
	}
	sr = s / 10;
	cout << "Сумата на числата е: " << s << "Средноаритметичното е: " << sr << endl;
	return 0;
}