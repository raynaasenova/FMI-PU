// P33_30.cpp : �� �� ������ ��������, ����� ������� ������� ����� �� ���������� ������.
//���������� ������ �� ������ � ������ ����������� ������ �������� �����.
//zad2

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
#include <cctype>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	char c, k;
	cout << "�������� ��� ����� ��������� ������: "; cin >> c >> k;
	//1 �������
	c = c - 'a' + 'A';
	cout <<"����������� ������ �������� ����� �: "<< c <<endl;
	//2 �������
	k = toupper(k);
	cout << "����������� ������ �������� ����� �: " << k << endl;
}