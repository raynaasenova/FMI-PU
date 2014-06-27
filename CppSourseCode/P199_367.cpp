// P200_367.cpp : Съставете подпрограма, която при зададена цифра връща записа на тази цифра с думи.  
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	unsigned int n;	
	cout << "Въведете чифра: "; cin >> n;
	switch (n)
	{
	case 0: cout<< "нула" << endl; break;
	case 1: cout << "едно" << endl; break;
	case 2: cout << "две" << endl; break;
	case 3: cout << "три" << endl; break;
	case 4: cout << "четири" << endl; break;
	case 5: cout << "пет" << endl; break;
	case 6: cout << "шест" << endl; break;
	case 7: cout << "седем" << endl; break;
	case 8: cout << "осем" << endl; break;
	case 9: cout << "девет" << endl; break;
	default: cout << "Няма такава цифра" << endl;
	}
	
}

