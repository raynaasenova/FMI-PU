//�� �� ������� ��������, ����� �� ������� ����� �� ����� ��������� ����� �� ������. 

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout<<"�������� �����: ";
	cin>>n;
	switch (n)
	{
	case 12: case 1: case 2: cout<<"����!"; break;
	case 3: case 4: case 5: cout<<"������!"; break;
	case 6: case 7: case 8: case 9: cout<<"����!"; break;
	default: cout<<"������ ��� ��������� �����!"; 
		break;
	}
	cout<<endl;
	return 0;
}

