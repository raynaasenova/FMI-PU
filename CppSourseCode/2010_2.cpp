// 2010_2.cpp : Defines the entry point for the console application.
//PrgKola

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N = 200, M = 41, C = 21, K=9, S=10, D=7;

struct PrgKola
{
	char marka[M];
	char cvyat[C];
	double cena;
	char kod[K];
	char klas[S];
	char data[D];	
};

typedef PrgKola Tmasiv[N+1];
Tmasiv masiv, masiv2, masiv3; int n, n2, n3;
//deklarirane na masiv

void inPrgKola(PrgKola &a)
{//vhodni danni za 1 kola
	cout << "Vuvedete marka na kola: "<<endl;
	cin.getline(a.marka,M);
	cout << "Vuvedete cvyat na kolata: " << endl;
	cin.getline(a.cvyat,C);
	cout << "Vuvedete naemna cena na den: " << endl;
	cin >> a.cena;
	cout << "Vuvedete kod: " << endl;
	cin >> a.kod;
	cin.ignore();

	//formirane na pole data vuv format udoben za sortirovka: ggmmdd
	a.data[0] = a.kod[6];
	a.data[1] = a.kod[7];
	a.data[2] = a.kod[4];
	a.data[3] = a.kod[5];
	a.data[4] = a.kod[2];
	a.data[5] = a.kod[3];

	switch (a.kod[1])
	{
	case '1':strcpy(a.klas, "malka"); break;
	case '2':strcpy(a.klas, "kompaktna"); break;
	case '3':strcpy(a.klas, "sredna"); break;
	case '4':strcpy(a.klas, "van"); break;
	case '5':strcpy(a.klas, "djip");
	}
}

void outPrgKola(PrgKola a)
{//izhodni danni za 1 kola
	cout << a.marka << ", " << a.klas << ", " << a.cvyat << ", " << a.data[4] << a.data[5]<<"."
		<< a.data[2] << a.data[3] << "." << a.data[0] << a.data[1] << "."<<endl;
}

void input(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Vuvedete danni za " << i << "-tata kola: " << endl;
		inPrgKola(a[i]);
	}
}

void output(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		outPrgKola(a[i]);
}

void SortMarka(Tmasiv a, int n)
{//po marka
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i;j--)
			if (strcmp(a[j-1].marka,a[j].marka)>0)
			{
				PrgKola x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}

void sortKlas2(Tmasiv a, int n)
{//po klas i cena
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (strcmp(a[j - 1].klas, a[j].klas) > 0 ||
				strcmp(a[j - 1].klas, a[j].klas) == 0 &&
				strcmp(a[j - 1].data, a[j].data) > 0)
			{
				PrgKola x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}

double sredna(Tmasiv a, int n)
{//namirane na sredna naemna cena na vsichki djipove
	double sr, s = 0; int br = 0;
	for (int i = 1; i <= n; i++)
		if (a[i].kod[1] == '5')
			//ako sa djipove
		{
			s += a[i].cena;
			br++;
			sr = s / br;
		}
	if (br > 0) return sr;
	else return 0;
}

void spisuk(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		if (strcmp(a[i].marka, "080814") <= 0 &&
			strstr(a[i].marka, "AUDI") != NULL ||
			strstr(a[i].marka, "BMW") != NULL)
			outPrgKola(a[i]);
}


int main()
{
	cout << "Vuvedete danni za I firma: " <<endl;
	do
	{
		cout << "Vuvedete broi koli: " << endl;
		cin >> n;
	} while (0 <= n || n > N); cin.ignore();
	input(masiv, n);

	cout << "Spisuk na kolite podredeni po azbu4en red po marka: " << endl;
	SortMarka(masiv, n);	
	output(masiv, n);

	cout << "Spisuk na kolite podredeni po klas i data: " << endl;
	sortKlas2(masiv, n);
	output(masiv, n);
	
	cout << "Spisuk na nevurnati AUDI i BMW: " << endl;
	spisuk(masiv, n);


	cout << "Vuvedete danni za II firma: " << endl;
	do
	{
		cout << "Vuvedete broi koli: " << endl;
		cin >> n2;
	} while (0 <= n2 || n2 > N); cin.ignore();
	input(masiv2, n2);

	cout << "Spisuk na kolite podredeni po azbu4en red po marka: " << endl;
	SortMarka(masiv2, n2);
	output(masiv2, n2);

	cout << "Spisuk na kolite podredeni po klas i data: " << endl;
	sortKlas2(masiv2, n2);
	output(masiv2, n2);

	cout << "Spisuk na nevurnati AUDI i BMW: " << endl;
	spisuk(masiv2, n2);

	cout << "Vuvedete danni za III firma: " << endl;
	do
	{
		cout << "Vuvedete broi koli: " << endl;
		cin >> n3;
	} while (0 <= n3 || n3 > N); cin.ignore();
	input(masiv3, n3);

	cout << "Spisuk na kolite podredeni po azbu4en red po marka: " << endl;
	SortMarka(masiv3, n3);
	output(masiv3, n3);

	cout << "Spisuk na kolite podredeni po klas i data: " << endl;
	sortKlas2(masiv3, n3);
	output(masiv3, n3);

	cout << "Spisuk na nevurnati AUDI i BMW: " << endl;
	spisuk(masiv3, n3);

	double sr1 = sredna(masiv, n);
	cout << "Sredna cena za djip na I firma: " <<sr1<< endl;

	double sr2 = sredna(masiv2, n2);
	cout << "Sredna cena za djip na I firma: " << sr2 << endl;

	double sr3 = sredna(masiv3, n3);
	cout << "Sredna cena za djip na I firma: " << sr3 << endl;

	if (sr1 < sr2)
		cout << "Minimalna sredna cena ot I firma: " <<sr1<< endl;
	else if (sr2 < sr3)
		cout << "Minimalna sredna cena ot II firma: " << sr2 << endl;
	
	else cout << "Minimalna sredna cena ot III firma: " << sr3 << endl;
	system("PAUSE");
}

