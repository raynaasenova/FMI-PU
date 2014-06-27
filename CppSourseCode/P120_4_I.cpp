//Да се състави програма, която по зададен номер на месец отпечатва името на сезона. 

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout<<"Въведете месец: ";
	cin>>n;
	switch (n)
	{
	case 12: case 1: case 2: cout<<"Зима!"; break;
	case 3: case 4: case 5: cout<<"Пролет!"; break;
	case 6: case 7: case 8: case 9: cout<<"Лято!"; break;
	default: cout<<"Въвели сте навалидни данни!"; 
		break;
	}
	cout<<endl;
	return 0;
}

