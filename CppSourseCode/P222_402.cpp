/* P222_402.cpp : Да се дефинира структура от вида :
- име на студент;
- дата на раждане;
- пол;
- оценка[1], оценка[2], ..., оценка[10];
- среден успех;
Напишете програма за въвеждане и извеждане на данни за един студент.*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

const int BRD = 4, //broi disciplini
L = 30;  //maksimalna dyljina na ime};
typedef struct { int den, mes, god; } date;
enum sex{ male, female };
typedef struct
{
	char ime[L];
	date datr;
	enum sex pol;
	int ocenki[10];
	double srusp;
} student;
void instud(student &a)
{
	SetConsoleOutputCP(1251);
	cout << "Въведете име:";
	cin.getline(a.ime, L); 
	cout << "Въведете дата на раждане:";
	cin >> a.datr.den >> a.datr.mes >> a.datr.god; cin.ignore();
	cout << "Въведете пол:<1> мъж, <2> жена:";
	int p; do cin >> p; while (p<1 || p>2);
	if (p == 1) a.pol = male; else a.pol = female;
	cout << "Въведете успех по дисциплините:" << endl;
	double s = 0;
	for (int k = 0; k<BRD; k++)
	{
		cout << "дисциплина:" << k + 1 << ":";
		cin >> a.ocenki[k];
		s = s + a.ocenki[k];
	}
	a.srusp = s / BRD;
} //instud
void outstud(student a)
{
	cout << a.ime <<strlen(a.ime)<< " ";
	cout << a.datr.den << "." <<a.datr.mes << "." <<a.datr.god;
	if (a.pol == male) cout << "  мъж "; else cout << " жена ";
	for (int k = 0; k<BRD; k++) cout <<a.ocenki[k];
	cout << "   " << a.srusp;
} //outstud
int main()
{
	student a;
	instud(a);
	outstud(a);
	cout << endl;
	system("PAUSE");
}


