// �� �� ������� ��������, ����� �� �������� ��������������� ����� ������� ����������� ��������� �����. ������ ���������� � ������� �� �������� switch � ��� ����.

#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	char n;
	cout<<"�������� 16-���� ����� �� ������������: ";
	cin>>n;
		switch (n)
	{
		case '0': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"0"<<endl; break;
		case '1': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"1"<<endl; break;
		case '2': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"2"<<endl; break;
		case '3': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"3"<<endl; break;
		case '4': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"4"<<endl; break;
		case '5': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"5"<<endl; break;
		case '6': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"6"<<endl; break;
		case '7': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"7"<<endl; break;
		case '8': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"8"<<endl; break;
		case '9': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"9"<<endl; break;
		case 'A': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"10"<<endl; break;
		case 'B': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"11"<<endl; break;
		case 'C': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"12"<<endl; break;
		case 'D': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"13"<<endl; break;
		case 'E': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"14"<<endl; break;
		case 'F': cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"15"<<endl; break;
		default: cout<<"���������� 16-���� ����� ����������� �� ����������� �����: "<<"������ ��� ��������� �����"<<endl; break;
	}
		system ("PAUSE");
		return 0;
}

