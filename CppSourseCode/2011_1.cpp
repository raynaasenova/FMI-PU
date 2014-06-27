// 2011_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N=10000, L=41, M=251;

struct film
{
	char zagl[L];
	char ime [M];
	int gp;
	double taksa;
};

typedef film Tmasiv[N+1];
Tmasiv masiv, masiv2, masiv3; int br, br2, br3;

void infilm (film &a)
{
	cout<<"Vuvedete zaglavie na filma: ";
	cin.getline(a.zagl,L); 
	cout<<"Vuvedete imenata na aktiorite: ";
	cin.getline (a.ime,M); 
	cout<<"Vuvedete godina na proizvodstvo: ";
	cin>>a.gp;
	cout<<"Vuvedete licenzionna taksa: ";
	cin>>a.taksa;
	cin.ignore ();
}

void outfilm (film a)
{
	cout << a.zagl << "; " << a.ime << "; " << a.gp << "; " << a.taksa << endl;
}

void input (Tmasiv a, int br)
{
	for (int i = 1; i <= br; i++)
	{
		cout << "Vuvedete danni za " << i << "-tia film: " << endl;
		infilm(a[i]);
	}
}

void output (Tmasiv a, int br)
{
	for (int i = 1; i <= br; i++)
		outfilm(a[i]);	
}

void spravkaime(Tmasiv a, int br)
{

	for (int i = 1; i <= br; i++)
	{
		if (strcmp(a[i].ime, "Robert De Niro") == 0)
			outfilm(a[i]);
	}
}

void sortzagl(Tmasiv a, int br)
{
	int i, j, ind; film min;
	for (i=1; i<=br-1;i++)
	{
		ind=i; min=a[i];
		for (j=i+1; j<=br;j++)
		if (strcmp(a[j].zagl,min.zagl) < 0)
		{
			ind=j; min=a[j];
		}
		a[ind]=a[i]; a[i]=min;
	}	
}

void sortgp(Tmasiv a, int br)
{
	int i, j, ind; film max; 
	for (i = 1; i <= br - 1; i++)
	{
		ind = i; max = a[i];
		for (j = i + 1; j <= br; j++)
			if (a[j].gp > max.gp || a[j].gp == max.gp && a[j].taksa < max.taksa)
			{
				ind = j; max = a[j];
			}
		a[ind] = a[i]; a[i] = max;
	}
}



void main ()
{
	cout << "Vuvedete broi filmi za I filmoteka: ";
	do 
	{
		cout<<"Vuvedete broi filmi: ";
		cin>>br;
	}
	while (br<=0 || br>N);
	cin.ignore ();
	input(masiv, br);
	
	cout << "Spisuk na vsichki filmi: "<<endl;
	output(masiv, br);

	cout << "Spisuk na filmite s glavna rolya na Robert De Niro"<<endl;	
	sortzagl (masiv, br);
	sortgp(masiv, br);
	spravkaime(masiv, br);	


	cout << "Vuvedete broi filmi za II filmoteka: ";
	do
	{
		cout << "Vuvedete broi filmi: ";
		cin >> br2;
	} while (br2 <= 0 || br2>N);
	cin.ignore();
	input(masiv2, br2);

	cout << "Spisuk na vsichki filmi: " << endl;
	output(masiv2, br2);

	cout << "Spisuk na filmite s glavna rolya na Robert De Niro" << endl;
	sortzagl(masiv2, br2);
	sortgp(masiv2, br2);
	spravkaime(masiv2, br2);


	cout << "Vuvedete broi filmi za III filmoteka: ";
	do
	{
		cout << "Vuvedete broi filmi: ";
		cin >> br3;
	} while (br3 <= 0 || br3>N);
	cin.ignore();
	input(masiv3, br3);

	cout << "Spisuk na vsichki filmi: " << endl;
	output(masiv3, br3);

	cout << "Spisuk na filmite s glavna rolya na Robert De Niro" << endl;
	sortzagl(masiv3, br3);
	sortgp(masiv3, br3);
	spravkaime(masiv3, br3);
}