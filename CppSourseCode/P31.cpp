//�� �� ������ ��������, � ����� ���������� ��������� ���� ����� � ��������� [1,6]. ���������� �� ������ �� ������ �������. ������ �� � ������, ���������� �� ������ true(1), � � �������� ������ - false(0). 

#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int x, y;
	srand(time(NULL)); //���������� ��������� �� �����
	x = 1 + rand() % 6; //rand (%)x ����� ����� � ��������� [0,x)
	cout << "I think an integer number from 1 to 6. What is it? "; cin >> y;
	cout << (x == y) << " The number is "<< x <<endl;
	/*if (x == y)
	{
		cout << x << " Yes, it is true!" << endl;
		
	}
	else
	{
		cout << x << " No, it is false!" << endl;
	}*/
	
	return 0;
}

