//p199_366.cpp : Defines the entry point for the console application.
//��������� ��������, ����� �������� ��� ���-�� � ������� ���������, ��� �� ������������� �� � ��-����. 
//���������� �������������� ����� ���-��. ��� ���������� � �����������, �� ����� ��� � �� ��-���������� ����������, ��� � ����������� � �� ��-������.

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

//typedef char EGN1[11], EGN2[11];
//int cmp = strncmp(EGN1, EGN2, 6);
//if (cmp < 0)
//	cout << "���� � ��� "<<EGN2<<"� ��-���� �� ���� � "<<EGN1<<endl;
//else if (cmp>0)
//	cout << "���� � ��� " << EGN1 << "� ��-���� �� ���� � " << EGN2 << endl;
//else
//	cout << "������� �� ������ �� ���� � ���� ����. "<< endl;

int main()
{
	SetConsoleOutputCP(1251);
	char EGN1[11], EGN2[11], POMEGN1[13], POMEGN2[13];
	cout << "�������� E�H �� ������ �����: "; cin >> EGN1;
	cout << "�������� E�H �� ������ �����: "; cin >> EGN2;
	if (EGN1[2] >= '4')
	{
		strcpy_s(POMEGN1, "20");
		EGN2[2] = EGN1[2] - 4;
	}
	else if (EGN1[2] >= '2')
	{
		strcpy_s(POMEGN1, "18");
		EGN2[2] = EGN1[2] - 2;
	}
	else
	{
		strcpy_s(POMEGN1, "19");
		strcat_s(POMEGN1, EGN1);
	}
	cout << POMEGN1 << endl;

	if (EGN2[2] >= '4')
	{
		strcpy_s(POMEGN2, "20");
		EGN2[2] = EGN2[2] - 4;
	}
	else if (EGN1[2] >= '2')
	{
		strcpy_s(POMEGN2, "18");
		EGN2[2] = EGN2[2] - 2;
	}
	else
	{
		strcpy_s(POMEGN2, "19");
		strcat_s(POMEGN2, EGN2);
	}
	cout << POMEGN2 << endl;


	int cmp = strncmp(POMEGN1, POMEGN2, 8);
	if (cmp < 0)
		cout << "���� � ������� ��� � ��-����" << endl;
	else if (cmp>0)
		cout << "���� � ������� ��� � ��-����." << endl;
	else
		cout << "������� �� ������ �� ���� � ���� ����." << endl;

	return 0;
}

