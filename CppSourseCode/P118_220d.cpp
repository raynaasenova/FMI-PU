// P118_220d.cpp : Defines the entry point for the console application.
//9.4289 E-018

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double F( int n, int j)
{
	double m=1;
	for (int i=1; i<=n; i++)
		m*= 1.0/(pow(i,j) + 1.0);
	return m;
}

void main()
{
	double x = F(15,3) / F(20, 1);
	cout<<"x = "<<x<<endl;
} 
