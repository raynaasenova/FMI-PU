//Да се направи функция, която отпечатва на екрана n на брой знака. Тази функция да се използва в програма, в която се въвеждат три естествени числа k, l, m и на екрана се отпечатват три реда, съответно с k, l, и m брой знака, като първия символ е "#, вторият "@", а третият "x".
//Primer1A

#include "stdafx.h"
#include<iostream>
using namespace std;

void znak(int n, char c)
{
	for (int i=1; i <= n; i++)
		cout << c;
		cout << '\n';
}

int main()
{
	int k, l, m;
	cout << "k, l, m = "; cin >> k >> l >> m;
	znak(k, '#');
	znak(l, '@');
	znak(m, 'x');
}

