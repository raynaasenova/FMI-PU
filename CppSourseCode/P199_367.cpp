// P200_367.cpp : ��������� �����������, ����� ��� �������� ����� ����� ������ �� ���� ����� � ����.  
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	unsigned int n;	
	cout << "�������� �����: "; cin >> n;
	switch (n)
	{
	case 0: cout<< "����" << endl; break;
	case 1: cout << "����" << endl; break;
	case 2: cout << "���" << endl; break;
	case 3: cout << "���" << endl; break;
	case 4: cout << "������" << endl; break;
	case 5: cout << "���" << endl; break;
	case 6: cout << "����" << endl; break;
	case 7: cout << "�����" << endl; break;
	case 8: cout << "����" << endl; break;
	case 9: cout << "�����" << endl; break;
	default: cout << "���� ������ �����" << endl;
	}
	
}

