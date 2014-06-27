//Да се изчислят изразите.

#include "stdafx.h"
#include<iostream>
#include<Math.h>

using namespace std;

int main()
{
	double a=0;
	//а)
	for (int i = 1; i <= 49; i+=2)
	{
		a= a + i;
	}
	cout << "a = " << a << endl;
	
	//б)
	double b = 1;
	for (int i = 1; i <= 49; i+=2)
	{
		b = 1 / b * 1 / i;
	}
	cout << "b = " << b << endl;

	//в)
	double v = 0;
	for (int i = 3, n = 2; i <= 51; i += 3, n++)
	{
		v= v + 1.0 / pow(i, n);		
	}
	cout << "v = " << v << endl;

	//г)
	double g = 0;
	for (int i = 1; i <= 49; i++)
	{
		g = g + sqrt(i);
	}
	cout << "g = " << g << endl;

	//д)
	double d = 0;
	for (int i = 1, j = 1; i <= 49; i++, j++)
	{
		d = d + pow(i,1.0/j);

	}
	cout << "d = " << d << endl;

	//е)
	double e = 0;
	for (int i = 49; i >=1; i--)
	{
		e = sqrt(i + e);
	}
	cout << "e = " << e << endl;
		
	//ж)
	double h = 0;
	for (int i = 100; i >= 1; i--)
	{
		h = tan(i + h);
	}
	cout << "h = " << h << endl;
	return 0;
}

