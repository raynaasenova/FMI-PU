// P48_example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	for (int i=100; i>=1; i-=2) cout<<i<<' ';
	cout<<endl;
	for (char i='Z'; i>='A'; i-=2) cout<<i<<' ';
	cout<<endl;
	return 0;
}

