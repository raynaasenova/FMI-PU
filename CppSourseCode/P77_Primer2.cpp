// P77_Primer2.cpp : �� �� ������� �������, ����� �� ��������� �����.
//��������� �� ���������:
//cout<<"<���������� �� ���������� �: "<<demo(3,a,sqrt(b)); 
//����������� �� ��������� ����� �� ����� ���������� ���������, ���������� � ���� ������.
//�. �. ���������� ��������� �� ��������� ����� �� ����� ���������� ������ �� ���� �� ������������.

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