#include "stdafx.h"
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);	
	//�)
	double s=0; int br=0, x;
	do 
		{
			cout<<"������ �����: "<<endl;
			cin>>x;
			s+=x;
			if ( x %3==0 && x!=0) {s+=x; br++;}
		}
	while (x!=0);		
	if (br>0) 
	{
		cout<<"������ �� �������: "<<s<<endl;
		cout<<"������������������� �� ������� �: "<<s/br<<endl;
	}
	//�)
	double p=1;
	do 
	{
		SetConsoleOutputCP(1251);
		cout<<"������ �����: ";
		cin>>x;
		if (x>=-5 && x<=5 && x!=0)
		{
			p*=x;
		}
		while (x!=0);
		cout<<"�������������� �� ������� �: "<<p<<endl;
	}

	return 0;
}