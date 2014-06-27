// P223_405.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int l=50;
struct car
{
	char marka[l];
	int godPr;
	double cena;
} a;

void incar(car &a)
{
cout<<"Vuvedete marka: ";
cin.getline(a.marka,l);
cout<<"Vuvedete godina na proizvodstvo: ";
cin>>a.godPr;
cout<<"Vuvedete prodajna cena: ";
cin>>a.cena;
}
void outcar (car a)
{
cout<<a.marka<<endl;
cout<<a.godPr<<endl;
cout<<a.cena<<endl;
}

int main()
{
incar (a);
outcar (a);
system ("PAUSE");
}

