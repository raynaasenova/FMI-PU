// P118_220v.cpp : Defines the entry point for the console application.
//4.05373

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double F(int n, int j)
{
	double s=0;
	for (int i=1;i<=n; i++)
		s+= 1.0/pow(i,j);
	return s;
}

void main()
{
	double x=(F(15,1) + F(10,2)) / F(20,3);
	cout<<"x = "<<x<<endl;
}