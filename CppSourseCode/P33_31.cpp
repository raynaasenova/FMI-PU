// P33_31.cpp : �� �� ������ ��������, � ����� ���������� "�������" ���� ����� � ��������� [1,6]. ������������ �� ������ �� ������ �������. ������ �� � ������, ���������� ������� true(1), � � �������� ������ - false(0).
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	int x, y;
	srand(time(NULL));//������������ ��������� �� �����
	x = 1 + rand() % 6;// ����� ����� � ��������� [0,6)
	cout << "�������� ���� �����. ������ ��� � ��: "; cin >> y;
	cout << (x == y) << " ����������� ����� � "<<x<<endl;	
}

