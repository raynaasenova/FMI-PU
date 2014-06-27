// P33_31.cpp : Да се напише програма, в която компютърът "измисля" цяло число в интервала [1,6]. Потребителят се опитва да познае числото. Когато го е познал, програмата извежда true(1), а в противен случай - false(0).
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	int x, y;
	srand(time(NULL));//инициализира генератор на числа
	x = 1 + rand() % 6;// връща число в интервала [0,6)
	cout << "Намислих едно число. Познай кое е то: "; cin >> y;
	cout << (x == y) << " Намисленото число е "<<x<<endl;	
}

