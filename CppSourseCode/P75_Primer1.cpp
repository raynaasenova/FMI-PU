//Да се направи функция, която отпечатва на екрана n на брой знака #. Тази функция да се използва в програма, в която се въвеждат три естествени числа k, l, m и на екрана се отпечатват три реда, съответно с k, l, и m брой знака #.
//Primer1

#include "stdafx.h"
#include<iostream>
using namespace std;
void diez(int n)
{
	for (int i = 1; i <= n; i++)
		cout << '#';
	cout << '\n';
}

int main()
{
	int k, l, m;
	cout << "k, l, m = " << endl;
	cin >> k >> l >> m;

	diez(k);
	diez(l);
	diez(m);
	return 0;
}