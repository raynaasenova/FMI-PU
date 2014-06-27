//Да се намери сумата Sn = 1 + 1/2 + 1/3 + ... + 1/n = 100.

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double s=0;
	for (int i = 1; i <= 100; i++)
	{
		s+ = 1.0 / i; //на променливата s се присвоява предишната й стойност + i-тото събираемо
	}		
	cout << "S = " << s;
	return 0;
}

