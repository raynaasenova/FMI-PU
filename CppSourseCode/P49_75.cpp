//�� �� ������ ������ � ������������������� �� 10 �������� ����� �� ������������.

#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int i;
	double x, s = 0, sr; //����
	for (i = 1; i <= 10; i++)
	{
		cout << "�������� ������� �����: "<<endl;
		cin >> x;
		s += x; //��� ������������ �� ������ ���������� �� x
	}
	sr = s / 10;
	cout << "������ �� ������� �: " << s << "������������������� �: " << sr << endl;
	return 0;
}