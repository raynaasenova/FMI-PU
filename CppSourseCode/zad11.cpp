//StDeED;�� �� ������ ��������, ����� ������� ����������� ���������� ����� � ������� �� ������� ������ ������� �� ���������, ���������� � ��������� �� �������.
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, s d, e;
	cout<<"�������� ���������� ����������� �����: "; 
	cin>>a;
	s = a / 100;
	d = a / 10 % 10;
	e = a % 10;
	cout<<"������� �� ��������� �: "<<s<<endl;
	cout<<"������� �� ���������� �: ";<<d<<endl;
	cout<<"������� �� ��������� �: ";<<e<<endl;	
	
	return 0;
}