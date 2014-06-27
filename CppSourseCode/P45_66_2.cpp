// Да се състави програма, която по въведена шестнадесетъчна цифра извежда съответното десетично число. Решете програмата с помощта на оператор switch и без него.
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
#include<math.h>

int main()
{
	SetConsoleOutputCP(1251);
	char n; 
	int m;
	cout<<"Моля, въведете 16-ична цифра за новертиране: "<<endl;
	cin>>n;
	
	if (n >= '0' && n <='9') 
		{
			m = n - '0'; 
		}
	else if (n >= 'A' && n <= 'F') 
		{
			m = n - 'A' + 10;
		}
	 
		else
			{
				cout<<"Некоректни данни!"<<endl;					
			}
		
	cout<<n<<" Въведената 16-4чна цифра съответсва на 10-ичното цисло: "<<m<<endl;		
	return 0;
}
