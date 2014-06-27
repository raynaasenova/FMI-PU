//Cylinder. Да се състави програма, която да изчислява лицато на пълната повърхнина (S) и обема (V) на цилиндър по зададени радиус на основата и височина на цилиндъра.
#include "stdafx.h"
#include<iostream>
using namespace std;
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	const double pi = 3.1415926536;
	double r, h, B, S, V;
	cout << "Радиус на основата "; 
	cin >> r;
	cout << "Височина на цилиндъра ";
	cin >> h;
	B = pi*r*r;
	S = 2 * pi*r*h + 2 * B;
	V = B*h;
	cout << "Резултати" << endl;
	cout << "Лицето на повърхнината е :" << S << endl;
	cout << "Обемът е: " << V << endl;
}

