// 407.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


const int l=50;
struct artikul
{
	char imeArtikul[l];
	double cena;
	int kolichestvo;
	double stoinost;
};

void inputArtikul (artikul &a)
{
	cout<<"Artikul: ";
	cin.getline(a.imeArtikul,l);
	cout<<"Cena: ";
	cin>>a.cena;
	cout<<"Kolichestvo: ";
	cin>>a.kolichestvo;
	cout<<"Stoinost";
	cin>>a.stoinost;
}

void outputArtikul(artikul a)
{
	cout<<a.imeArtikul<<endl;
	cout<<a.cena<<endl;
	cout<<a.kolichestvo;
	cout<<a.stoinost;
}


int main()
{
	artikul a;
	inputArtikul (a);
	outputArtikul(a);
	system ("PAUSE");
}

