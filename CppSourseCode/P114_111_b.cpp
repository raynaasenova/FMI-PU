#include "stdafx.h"
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);	
	//а)
	double s=0; int br=0, x;
	do 
		{
			cout<<"Въведи число: "<<endl;
			cin>>x;
			s+=x;
			if ( x %3==0 && x!=0) {s+=x; br++;}
		}
	while (x!=0);		
	if (br>0) 
	{
		cout<<"Сумата на числата: "<<s<<endl;
		cout<<"Средноаритметичното на числата е: "<<s/br<<endl;
	}
	//б)
	double p=1;
	do 
	{
		SetConsoleOutputCP(1251);
		cout<<"Въведи число: ";
		cin>>x;
		if (x>=-5 && x<=5 && x!=0)
		{
			p*=x;
		}
		while (x!=0);
		cout<<"Произведението на числата е: "<<p<<endl;
	}

	return 0;
}