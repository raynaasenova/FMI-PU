// P60_111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);	
	double x,s=0; int br=0;
	do 
		{
			cout<<"Въведи число: "<<endl;
			cin>>x;
			s+=x;
				if (x!=0) br++;
		}
	while (x!=0);		
	if (br>0) 
		cout<<"Сума: "<<s<<"Средноаритметично: "<<s/br<<endl;

	return 0;
}

