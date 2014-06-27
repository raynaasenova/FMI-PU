#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	double x,y,z,result;
	cin>>x>>y>>z;
	result =(x+y)/(z+(z/(x+(z/(y-x)))));
	cout<<result;
	system("PAUSE");
	return 0;
}