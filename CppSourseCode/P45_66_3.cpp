// �� �� ������� ��������, ����� �� �������� ��������������� ����� ������� ����������� ��������� �����. ������ ���������� � ������� �� �������� switch � ��� ����.

#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
     SetConsoleOutputCP(1251);
	char c;
	cout<<"�������� 16-���� �����: ";cin>>c;
		switch (c)
		{
		case '0': case '1': case '2': case '3': 
		case '4': case '5': case '6': case '7': 
		case '8': case '9': cout<<"���������:"<<c; break;
		case 'A': case 'a': cout<<"���������:"<<10; break;
		case 'B': case 'b': cout<<"���������:"<<11; break;
		case 'C': case 'c': cout<<"���������:"<<12; break;
		case 'D': case 'd': cout<<"���������:"<<13; break; 
		case 'E': case 'e': cout<<"���������:"<<14; break;
		case 'F': case 'f': cout<<"���������:"<<15; break;		
		default: cout<<"������ ��� ���������� �����!";
		}
		cout<<endl;
		return 0;
}

