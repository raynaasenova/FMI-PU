// P118_220a.cpp : Defines the entry point for the console application.
//x=1.73642

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double F(int n)
{
	double s=0;
	for(int i=1; i<=n; i++)
		s+=1.0/i;
	return s;
}

void main()
{
	double x = (F(15) + F(10)) / F(20);
	cout<<"x = "<<x<<endl;

}

