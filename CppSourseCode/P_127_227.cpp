// P_127_227.cpp : Defines the entry point for the console application.
//sumavector

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

const int constmax=50;
typedef double vector[constmax];

void input(vector a, int n)
{
	for (int i=0; i<n; i++)
	{cout<<"a["<<i<<"]"; cin>>a[i];}
}

double suma(vector a, int n)
{
	double s=0;
	for (int i=0; i<n; i++)
		s+=a[i];
	return s;
}

double pr(vector a, int n)
{
	double p;
	for (int i=0;i<n;i++)
	p*=a[i];
	return p;
}
int main()
{
	SetConsoleOutputCP(1251);
	vector a;
	int n;
	cout<<"Въведете брой елементи на масива: ";cin>>n;
	if(n<1 || n>constmax || !cin)
	{cout<<"Error!"; return 1;}
	input(a,n);
	cout<<"Сумата на елементите е: "<<suma(a,n)<<endl;
	cout<<"Произведението на елементие е: "<<pr(a,n)<<endl;
}