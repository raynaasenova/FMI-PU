//StDeED;Да се напише програма, която въвежда положително трицифрено число и извежда на отделни редове цифрите на стотиците, десетиците и единиците на числото.
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, s d, e;
	cout<<"Въведете трицифрено положително число: "; 
	cin>>a;
	s = a / 100;
	d = a / 10 % 10;
	e = a % 10;
	cout<<"Цифрата на стотиците е: "<<s<<endl;
	cout<<"Цифрата на десетиците е: ";<<d<<endl;
	cout<<"Цифрата на единиците е: ";<<e<<endl;	
	
	return 0;
}