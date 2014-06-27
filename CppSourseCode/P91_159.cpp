// P90_159.cpp : Напишете функция, която съкращава смесена дроб.

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

int main()
{
	SetConsoleOutputCP(1251);
	long chislo, chislitel2, chislo2, chislitel, znamenatel, p, q;
	char Znak;
	
		cout << "Въведете число, числител и знаменател на смесената дроб: " << endl;
		cin >> chislo >> chislitel >> znamenatel;

		chislitel2 = chislo*znamenatel + chislitel;

		if (chislitel2*znamenatel >= 0)
			Znak = ' ';
		else
			Znak = '-';
		chislitel2 = abs(chislitel2);
		znamenatel = abs(znamenatel);
	
	Reduce(chislitel, znamenatel, p, q);
	chislo2 = chislitel2 / znamenatel;
	chislitel2 = p % q;
	
	/*cout << "chislo: " << chislo << endl;
	cout << "chislitel: " << chislitel << endl;
	cout << "znamenatel: " << znamenatel << endl;
	cout << "chislo2: "<< chislo2 << endl;
	cout << "chislitel2: " << chislitel2 << endl;
	cout << "znamenatel2: " << q << endl;*/
	cout << "Първоначална дроб: " << Znak << chislo << '+' << chislitel << '/' << znamenatel << endl << "Съкратена дроб: " << Znak << chislo2 <<'+'<< chislitel2 << '/' << q << endl;
}