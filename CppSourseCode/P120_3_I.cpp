// Да се състави програма, която да изчислява стойността на функцията.

#include "stdafx.h"
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y;
	cout<<"Enter X = "<<endl;
	cin>>x;
	if (x<-4)
	{
		y = (2*x*x)/(x + 4);
	}	
	else if (x>4)
	{
		y = (log(x - 4)*exp(x))/(pow(x,5)+ sqrt(x));
	}
	else //if (x>=-4 && x>=4)
	{
		y = 0;
	}
	cout<<"Y = "<<y;
	cout<<endl;
	return 0;
}

