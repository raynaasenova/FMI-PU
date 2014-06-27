// Да се състави програма, която по въведена шестнадесетъчна цифра извежда съответното десетично число. Решете програмата с помощта на оператор switch и без него.

#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
     SetConsoleOutputCP(1251);
	char c;
	cout<<"Въведете 16-ична цифра: ";cin>>c;
		switch (c)
		{
		case '0': case '1': case '2': case '3': 
		case '4': case '5': case '6': case '7': 
		case '8': case '9': cout<<"десетично:"<<c; break;
		case 'A': case 'a': cout<<"десетично:"<<10; break;
		case 'B': case 'b': cout<<"десетично:"<<11; break;
		case 'C': case 'c': cout<<"десетично:"<<12; break;
		case 'D': case 'd': cout<<"десетично:"<<13; break; 
		case 'E': case 'e': cout<<"десетично:"<<14; break;
		case 'F': case 'f': cout<<"десетично:"<<15; break;		
		default: cout<<"Въвели сте некоректни данни!";
		}
		cout<<endl;
		return 0;
}

