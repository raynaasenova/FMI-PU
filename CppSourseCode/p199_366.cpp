//p199_366.cpp : Defines the entry point for the console application.
//Съставете програма, която сравнява две ЕГН-та и извежда съобщение, кой от притежателите им е по-млад. 
//Сравняваме лексикогравски двете ЕГН-та. Ако резултатът е отрицателен, то първо ЕГН е на по-възрастния притежател, ако е положителен е на по-младия.

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

//typedef char EGN1[11], EGN2[11];
//int cmp = strncmp(EGN1, EGN2, 6);
//if (cmp < 0)
//	cout << "Този с ЕГН "<<EGN2<<"е по-млад от този с "<<EGN1<<endl;
//else if (cmp>0)
//	cout << "Този с ЕГН " << EGN1 << "е по-млад от този с " << EGN2 << endl;
//else
//	cout << "Двамата са родени на една и съща дата. "<< endl;

int main()
{
	SetConsoleOutputCP(1251);
	char EGN1[11], EGN2[11], POMEGN1[13], POMEGN2[13];
	cout << "Въведете EГH на първия човек: "; cin >> EGN1;
	cout << "Въведете EГH на втория човек: "; cin >> EGN2;
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
		cout << "Този с второто ЕГН е по-млад" << endl;
	else if (cmp>0)
		cout << "Този с първото ЕГН е по-млад." << endl;
	else
		cout << "Двамата са родени на една и съща дата." << endl;

	return 0;
}

