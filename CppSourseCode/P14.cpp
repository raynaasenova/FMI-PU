//Aritmetichna progresia. Да се състави алгорътъм за изчисляване на сумата S на аритметична прогресия със зададен първи член a1, разлика d и брой на членовете n. 
//Сумата S на първите n числа на аритметична прогресия се получава по формулата: S=(a1+an)n/2, където a1 е първият елемент, а an е последният. an=a1+(n-1)d
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	
	SetConsoleOutputCP(1251);
	int a1, d, n, S;
	cout << "Enter a1: ";
	cin >> a1;
	cout << "Enter d: ";
	cin >> d;
	cout << "Enter n: ";
	cin >> n;	
	S = (a1 + (a1 + (n - 1)*d))*n/2;
	cout << "S = "<< S;
	system("PAUSE");
}

