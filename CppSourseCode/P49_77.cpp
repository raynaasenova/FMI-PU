//Да се пресметнат сумите: 

#include "stdafx.h"
#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	double z1 = 0, z2 = 0;
	for (int i = -10; i <= 15; i++)
	{
		z1 += (i + i*i + 1) / (pow(i, 5) + 2);
	}
	cout << "Z1 = " << z1 << endl;

	for (int i = 0; i <= 6; i++)
	{
		z2 += pow(i, 5) / (pow(i, 2) + pow(i, 3) + 2);
	}
	cout << "Z2 = " << z2 << endl;
	return 0;
}