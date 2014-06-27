// P90_158.cpp : Напишете функция reduce(a,b,c,d) с цели цичсла, която да привежда дробта a/b(a различно от 0,b разбично от 0) в несъкратима p/q. Допустими ли са и защо обръщенията: reduce(k+1, 14, n, 7) и reduce(k, sqrt(36), k, n)

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
	
	do {cout << "Въвете числител: "; cin >> Num;}
	while (Num == 0);
	
	do { cout << "Въведете знаменател: "; cin >> Denom; } 
	while (Denom == 0);

	if (Num*Denom >= 0)
		Znak = ' ';
	else
		Znak = '-';
	Num = abs(Num);
	Denom = abs(Denom);
	Reduce(Num, Denom, p, q);
	
	cout << "Първоначална дроб: "<<Znak<<Num<<'/'<<Denom<<"Съкратена дроб: "<<Znak<<p<<'/'<<q<<endl;
	}
