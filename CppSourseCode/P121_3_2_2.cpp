// P121_3_2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double F(int n)
{
	double s=0;
	for (int i=1; i<=n; i++)
		s+=pow(i,1.0/4);
	return s;
}

void main()
{
	int a,b;
	
	do
	{
		cout<<"a, b =";cin>>a>>b;
	} while (a<=0 || b<=0);

	double x=F(a+b) + F(abs(a-b));
		cout<<"x ="<<x<<endl;
	

}