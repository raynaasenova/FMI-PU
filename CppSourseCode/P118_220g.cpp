// P118_220g.cpp : Defines the entry point for the console application.
//3.86.. E-024

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double F(int n, int j)
{
	double m=1;
	for (int i = 1; i <=n; i++)
		m*= 1.0/(pow(i,j) + 1.0);
	return m;
}

void main()
{
	double x = F(15, 3) / F (15, 1);
	cout<<"x = "<<x<<endl;
}


