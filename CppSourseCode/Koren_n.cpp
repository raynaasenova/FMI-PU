// Koren_n.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<math.h>
#include<windows.h>
double koren_n(double x, double n)
{
	return pow(x,1.0/n);
}

void main()
{
	SetConsoleOutputCP(1251);
	double x,n;
	cout<<"x,n="<<endl;
	cin>>x>>n;
	cout<<"Корен "<<n<<"-ти от "<<x<<"="<<koren_n(x,n)<<endl;//Тук на място си смята функцията
}

