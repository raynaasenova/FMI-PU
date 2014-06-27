// RobertDeNIro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N = 10000, Z = 41, L=251;

struct prg
{
	char zagl[Z];
	char ime[L];
	int gpr;
	double taksa;
};//структура на масив

typedef prg Tmasiv[N + 1];
Tmasiv masiv, masiv2, masiv3; int n, n2, n3;
//дефиниране на масив

void inprg(prg &a)
{
	cout << "Vuvedete zaglavie na film: " << endl;
	cin.getline(a.zagl, Z);
	cout << "Vuvedete imenata na izpulnitelite v glavnite roli, razdeleni sus zapetaya: " << endl;
	cin.getline(a.ime, L);
	cout << "Vuvedete godina na proizvodstvo: " << endl;
	cin >> a.gpr;
	cout << "Vuvedete licenzna taksa za prodajba na filma: " << endl;
	cin >> a.taksa;
}//входни данни за един участник

void outprg(prg a)
{
	cout << a.zagl << "; " << a.ime << "; " << a.gpr << "; " << a.taksa << endl;
}//изходни данни за един участинк

void input(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Vuvedete danni za " << i << "-ia film: " << endl;
		inprg(a[i]);
		cin.ignore();
	}
}

void output(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		outprg(a[i]);
}

void sort2(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (strcmp(a[j - 1].zagl, a[j].zagl) > 0)
	{
		prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
	}
	
}

void sort3(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i;j--)
			if (a[j - 1].gpr < a[j].gpr ||
				a[j - 1].gpr == a[j].gpr &&
				a[j - 1].taksa > a[j].taksa)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;			
			}
}

void spravka3(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		if (strcmp(a[i].ime, "Robert De Niro") == 0)
			outprg(a[i]);			
}


int main()
{
	cout << "Vuvedete broi filmi za I filmoteka: ";
	do
	{cout << "Vuvedete broi filmi: " << endl;
	cin >> n;		
	} while (n < 0 || n > N);
	cin.ignore();
	input(masiv, n);	

	cout << "Spisuk na vsichki filmi: " << endl;
	sort2(masiv, n);
	output(masiv, n);

	cout << "Spisuk na vsichki filmi s Robert De Niro: " << endl;
	sort3(masiv, n);
	spravka3(masiv, n);

	cout << "Vuvedete broi filmi za II filmoteka: ";
	do
	{
		cout << "Vuvedete broi filmi: " << endl;
		cin >> n2;
	} while (n2 < 0 || n2 > N);
	cin.ignore();
	input(masiv2, n2);

	cout << "Spisuk na vsichki filmi: " << endl;
	sort2(masiv2, n2);
	output(masiv2, n2);

	cout << "Spisuk na vsichki filmi s Robert De Niro: " << endl;
	sort3(masiv2, n2);
	spravka3(masiv2, n2);


	cout << "Vuvedete broi filmi za III filmoteka: ";
	do
	{
		cout << "Vuvedete broi filmi: " << endl;
		cin >> n3;
	} while (n3 < 0 || n3 > N);
	cin.ignore();
	input(masiv3, n3);

	cout << "Spisuk na vsichki filmi: " << endl;
	sort2(masiv3, n3);
	output(masiv3, n3);

	cout << "Spisuk na vsichki filmi s Robert De Niro: " << endl;
	sort3(masiv3, n3);
	spravka3(masiv3, n3);

	system("PAUSE");
}