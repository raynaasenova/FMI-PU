#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	double a,b,x,y,z,result;
	cin>>a>>b>>x>>y>>z;
	result = pow((y+6*a-2)/(3*(x+6)),6) - (z/(z+7*b));
	cout<<result;
	system("PAUSE");
	return 0;
}
