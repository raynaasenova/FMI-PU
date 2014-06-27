// P84_izpit.cpp : Какъв ще бъде резултатът от изпълнението на следващата програма, ако a=2, b=3, c=-1, d=-2?
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int a, b, c, d;

void p1(int x, int &y)
{
	int a = 1;//Локалната променлива а закрива глобалната променлива а.
	c = y - 2 * a;
	x = y+2*a;
	cout << a << " " << b << " " << c << " " << d << endl;
	y = a + x;	
}

int main()
{
	cout << "a,b,c,d = "; cin >> a >> b >> c >> d;
	p1(a,b);
	cout << a << " " << b << " " << c << " " << d<<endl;
}
