// P77_Primer2.cpp : Да се състави функция, която да изчислява израз.
//Извикване на функцията:
//cout<<"<Резултатът от операцията е: "<<demo(3,a,sqrt(b)); 
//Параметрите на функцията могат да бъдат произволни константи, променливи и дори изрази.
//Т. е. формалните параметри на функцията могат да бъдат произволни изрази от типа на фактическите.

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

float demo(float x, float y, float z)
{
	return sqrt(x*y + y*z);
}	

void main()
	{
	float a, b, c, d;
	cout << "a, b, c = "; cin >> a >> b >> c;
	d = demo(3,a,sqrt(b)-1);
	cout << "d1 = " << d << endl;
	cout << "d2 = "<<demo(a,b,c);
	}