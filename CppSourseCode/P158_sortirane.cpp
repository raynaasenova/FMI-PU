// Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int constmax = 50;
typedef double vector[constmax];

void input(vector a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void output(vector a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
}

void meh(vector a, int n)
{
	for (int i = 1; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (a[j - 1] > a[j])
			{
				double x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
}

int main()
{
	vector m; int n;
	cout << "n>=1: "; cin >> n;
	if (n<1 || !cin)
	{
		cout << "Error!";
		return 1;
	}
	input(m, n);
	meh(m, n);
	cout << "Sort a:" << endl;
	output(m, n);
}