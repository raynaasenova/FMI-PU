// NOD_NOK.cpp : �� �� ������� �������, ����������� ��� �� 2 ���������� �����. � ����� ����� �� �� ������� ��� �� ���������� ���� ���������� ����� (�� ���� �� ����������� - 0).  
//��� � ���. ��������� �� ������
//��� ������������ �� ������ ��� ������� ������ ����� ��� ���� �� ��������� ��������� �� ���� int. �� ���� ��� �������� int � long. 

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int nod (int a, int b)
{
	while (a != b)
	
	if (a > b)
		a = a - b;
	else
		b = b - a;
	return a;
}

int nok(int a, int b)
{
	return a*b / nod(a, b);
}

void main()
{
	SetConsoleOutputCP(1251);
	int x, y, z;
	do
	{		
		cout << "�������� ���������� �����: "; cin >> x;
	}
		while (x < 0);
		z = x;
		cout << "�������� �������� ����� (0 �� ����): " << endl;
		do
		{
			cout << "�������� �����: "; cin >> y;
			if (y>0)
			{
				z = nok(z, y);
				x = nod(x, y);
			}
		}
			while (y > 0);
			cout << "��� � : " << x << endl;
			cout << "��� � : " << z << endl;
}