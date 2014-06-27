// 2012_1.cpp : Defines the entry point for the console application.
//prg

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N = 1000, L = 51, G = 51, U=31;

struct prg
{
	char ime[L];
	char grad[G];
	char uchilishte[U];
	int res;	
};

typedef prg Tmasiv[N + 1];
Tmasiv masiv; int n;

void inprg(prg &a)
{	
	cout << "Vuvedete ime na sustezatelia: ";
	cin.getline(a.ime, L);
	cout << "Vuvedete grad: ";
	cin.getline(a.grad, G);
	cout << "Vuvedete uchilishte: ";
	cin.getline(a.uchilishte,U);
	cout << "Vuvedete resultat: ";
	cin >> a.res;	
	cin.ignore();
}

void outprg(prg a)
{
	cout << a.ime << ", " << a.grad << ", " << a.uchilishte << ", " << a.res << " tochki"<< endl;
}

void input(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Vuvedete danni za " << i << "-tia sustezatel: " << endl;
		inprg(a[i]);
	}
}

void output(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		outprg(a[i]);
}

void sort_res(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (a[j-1].res < a[j].res)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}

void sort3(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (strcmp(a[j - 1].uchilishte, a[j].uchilishte) > 0 ||
				strcmp(a[j - 1].uchilishte, a[j].uchilishte) == 0 &&
				a[j - 1].res < a[j].res)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}

}
void spravka3(Tmasiv a, int n)
{
	char grad_f[20];
	cout << "Vuvedete grad za tursene: " << endl;
	cin.getline(grad_f,20);
	for (int i = 1; i <= n; i++)
		if (strstr(a[i].grad, grad_f) != NULL)
			outprg(a[i]);
}


void spravka4(Tmasiv a, int n)
{
	double sr, s = 0; int br = 0;
	for (int i = 1; i <= n; i++)
	{
		s += a[i].res;
		br++;
	}
	//if (br > 0) return 
		sr = s / br;
	//else return 0;

	for (int i = 1; i <= n; i++)
		{
			if (strstr(a[i].uchilishte, "SOU") != NULL 
				&& sr < a[i].res)
				outprg(a[i]);
		}
}

int main()
{
	do
	{
		cout << "Vuvedete broi sustezateli: "<<endl;
		cin >> n;
	} while (n <= 0 || n>N);
	cin.ignore();
	input(masiv, n);

	cout << "Spisuk na vsichki sustezateli: " << endl;
	sort_res(masiv,n);
	output(masiv, n);

	cout << "Spisuk po t.3" << endl;
	sort3(masiv, n);
	sort_res(masiv, n);
	spravka3(masiv, n);

	cout << "Spisuk po t.4" << endl;
	spravka4(masiv, n);
}