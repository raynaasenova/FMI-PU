// Olimpiada_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N = 1000, L = 50, D = 30, M=9;

//struct medali 
//{
//	char bronzov[8]="bronzov";
//	char sreburen[9]="sreburen";
//	char zlaten[7]="zlaten";
//};

struct prg
{
	char ime[L];
	char durj[D];
	int tochki;
	double procent;
	char medal[M];
};//definirane na struktura

typedef prg Tmasiv[N+1];
Tmasiv masiv; int n;
//definirane na masiv

void inprg(prg &a)
{
	cout << "Vuvedete ime na uchastnik: " << endl;
	cin.getline(a.ime, L);
	cout << "Vuvedete durjava na uchastnik: " << endl;
	cin.getline(a.durj,D);
	cout << "Vuvedete broi tochki: " << endl;
	cin >> a.tochki;
}//vhodni danni za edin uchastnik

void outprg(prg a)
{
	cout << a.ime << ", " << a.durj << ", " << a.tochki << " tochki" << endl;
}//izhodni danni za edin uchastnik

void outprg3(prg a)
{
	cout << a.durj << ", " << a.ime << ", " << a.tochki << " tochki" <<a.procent<<" %"<< endl;
}//izhodni danni za edin uchastnik po t.3

void outprg4(prg a)
{
	cout << a.ime << ", " << a.durj << ", " << a.medal <<" medal"<< endl;
}//izhodni danni za edin uchastnik po t.4

void input(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Vuvedete danni za "<<i<<"-tia uchastnik: "<<endl;
		inprg(a[i]);
		cin.ignore();
	}//Vuvejdane na masiv
}

void output(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		outprg (a[i]);
	}
}

void sort2(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (a[j - 1].tochki < a[j].tochki)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}	
}//nizhodiashta sortirovka po broi tochki

void sotr3(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (strcmp(a[j - 1].durj, a[j].durj) > 0 ||
				strcmp(a[j - 1].durj, a[j].durj) == 0 &&
				(a[j - 1].ime < a[j].ime))
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}

void spravka3(Tmasiv a, int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += a[i].tochki;
	cout << "Suma na tochkite na vsichki uchastnivi : " << sum << endl;
	for (int i = 1; i <= n; i++)
	{
		a[i].procent = a[i].tochki / sum * 100;
		outprg3(a[i]);
	}
}


void spravka4(Tmasiv a, int n)
{
	;
}


int main()
{
	cout << "Vuvedete broi uchastnici v olimpiadata: " << endl;
	cin >> n; 
	cin.ignore();

	sort2(masiv, n);
	output(masiv, n);


	system("PAUSE");
}

