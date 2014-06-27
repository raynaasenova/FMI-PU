// 419.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n=50, l=30;//���������� ������� �� �������
struct car 
{
	char marka[l];
	int gp;
	double cena;
};

typedef car Tmasiv[n+1];
Tmasiv masiv; int br;

void incar(car &a)
{
	cout<<"Vuvedete marka: ";
	cin.getline(a.marka,l); 
	cout<<"Vuvedete gotina na prizvodstvo";
	cin>>a.gp;
	cout<<"Vuvedete cena: ";
	cin>>a.cena;	
	cin.ignore();
}//������ ����� �� ������

void outcar(car a)
{
	cout<<a.marka<<" "<<a.gp<<" "<<a.cena<<endl;
}//������� ������� �� ������ 

void input(Tmasiv a, int br)
{
	for (int i=1; i<=br;i++)
	{
		cout<<"Vuvedete danni za "<<i<<"-ata kola"<<endl; 
		incar(a[i]);//incar za i-ata kola
	}
}

void output(Tmasiv a, int br)
{
	for (int i=1; i<=br;i++)
		outcar(a[i]);//������� ������� �� i-���� ����
}

void spravkaEvtini(Tmasiv a, int br)
{
	double min;
	cout<<"Vuvedete minimalna cena:";
	cin>>min;
	for (int i=1;i<=br;i++)
		if (a[i].cena < min)
			outcar(a[i]);
	cin.ignore();//������� �� ������, ����� �� ��� ����������� ����
}

void spravkaMarka(Tmasiv a, int br)
{
	char carMarka[l];
	double suma=0;
	cout<<"Vuvedete marka: ";
	cin.getline(carMarka,l);
		for (int i=1;i<=br;i++)
			if (strcmp(carMarka,a[i].marka)==0)
			{
				suma+=a[i].cena;
				outcar(a[i]);
			}
			cout<<"Sumata na kolite ot marka "<<carMarka<<" e "<<suma<<" lv."<<endl;
}

void sortMarka(Tmasiv a, int br)
{ int i,j; car pom;
     for (i=2; i<=br; i++)
       for (j=br; j>=i; j--)
         if (strcmp(a[j-1].marka,a[j].marka)>0)
		 { pom=a[j]; a[j]=a[j-1]; a[j-1]=pom; }
}//���������� �� ����� �� �������� ���

void sortGp(Tmasiv a, int br)
{ int i,j; car pom;
     for (i=2; i<=br; i++)
       for (j=br; j>=i; j--)
         if (a[j-1].gp<a[j].gp)
		 { pom=a[j]; a[j]=a[j-1]; a[j-1]=pom; }
}//���������� �� ������

int main()
{
	cout<<"Vuvedete broi koli: ";
	cin>>br; cin.ignore();
	input(masiv, br);
	
	cout<<"Spisuk na vsichki koli"<<endl;
	output(masiv, br);
	
	cout<<"Spisuk na kolite, koito sa pod vuvedenata cena: ";
	spravkaEvtini(masiv, br);

	cout<<"Spisuk na kolite ot dadena marka i obshta suma v lv.";
	spravkaMarka(masiv, br);

	cout<<"Spisuk na koli po marka: "<<endl;
	sortMarka(masiv, br);
	output(masiv, br);

	cout<<"Spisuk na kolite, sortirani po godina na proizvodstvo."<<endl;
	sortGp(masiv, br);
	output(masiv, br);
}