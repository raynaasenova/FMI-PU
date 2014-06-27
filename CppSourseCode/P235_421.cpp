// P235_421.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 50, 
		  l = 30;//Максимална дължина на името

struct student
{
	int Fnomer;
	char ime[l];	
	double ocenka;
};

typedef student Tmasstudent[n + 1];
Tmasstudent masstudent;

int br;
void instudent(student &a)
{
	cout << "Vuvedete fakulteten nomer: ";
	cin >> a.Fnomer; cin.ignore();
	cout << "Vuvedete ime: ";
	cin.getline(a.ime, l); strtok(a.ime, "\n");
	cout << "Vuvedete ocenka: ";
	cin >> a.ocenka; cin.ignore();
}//Входни данни за студента

void outstudent(student a)
{
	cout << a.Fnomer << " " << a.ime << " " << a.ocenka << endl;
}//Изходни данни за студента

void input(Tmasstudent a, int br)
{
	for (int i = 1; i <= br; i++)
	{
		cout << "Vuvedete danni za "<<i<<" -ia student"<<endl;
		instudent(a[i]);
	}
}//Искаме от потребителя да въведе входни данни от клавиатурата
 
void antetka()
{
	cout << "Fakulteten nomer" << " Ime na student" << " Ocenka" << endl;
}//Антетка на таблицата за изходните данни

void output(Tmasstudent a, int br)
{
	antetka();
	for (int i = 1; i <= br; i++)
		outstudent(a[i]);
}//Изходни данни

void sortOcenkaVis(Tmasstudent a, int br)
{
	double ocenkaMin;
	cout<<"Vuvedete ocenka: ";
	cin >> ocenkaMin;
	for (int i = 1; i <= br; i++)
		if (a[i].ocenka > ocenkaMin)
			outstudent(a[i]);
}

int spIvan(Tmasstudent a, int br)
{
	antetka();
	int brIvan = 0;
	for (int i = 1; i <= br;i++)
		if (strstr(a[i].ime, "Ivan") || strstr(a[i].ime, "ivan"))
		{
			outstudent(a[i]); brIvan++;
			return brIvan;
		}
}

void sortIme()
{
	;
}

void sortOcenkaMin()
{
	;
}

int main()
{
	cout << "Vuvedete broi studenti: ";
	cin >> br;//Толкова пъти ще се появи функцията input, съотвенто output
	input(masstudent, br);
	output(masstudent, br);	
	sortOcenkaVis(masstudent, br);
	cout <<"Broi studenti, sudurjashti \"Ivan\" ili \"ivan\" << spIvan(masstudent, br)<<endl;
	  sortIme(masstudent, br);
	  output(masstud, br);
	  sortOcenkaMin(masstudent, br);
}

