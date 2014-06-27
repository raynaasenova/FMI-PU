// P33_30.cpp : Да се напише програма, което въвъжда редовна буква от латинската азбука.
//Програмата трябва да намери и изведе съответната главна латинска буква.
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
	cout << "Въведете две малки алатински букваи: "; cin >> c >> k;
	//1 вариант
	c = c - 'a' + 'A';
	cout <<"Съответната голяма латинска буква е: "<< c <<endl;
	//2 вариант
	k = toupper(k);
	cout << "Съответната голяма латинска буква е: " << k << endl;
}