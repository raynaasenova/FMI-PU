// Olimpiada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int N = 1000, L = 31, D = 21;

struct prg
{
	char ime[L];
	char durj[D];
	int tochki;
	double proc_uch;
};//��������� �� �����

typedef prg Tmasiv[N + 1];
Tmasiv masiv; int n;
//���������� �� �����

void inprg(prg &a)
{
	cout << "Vuvedete ime na uchastnik: " << endl;
	cin.getline(a.ime, L);
	cout << "Vuvedete durjava na uchastnik: " << endl;
	cin.getline(a.durj, D);
	cout << "Vuvedete broi tochki: " << endl;
	cin >> a.tochki;
}//������ ����� �� ���� ��������

void outprg(prg a)
{
	cout << a.ime << ", " << a.durj << ", " << a.tochki << " tochki" << endl;
}//������� ����� �� ���� ��������

void outprg3(prg a)
{
	cout << a.durj << ", " << a.ime << ", " << a.tochki << " tochki, " << a.proc_uch << " %" << endl;
}//������� ����� �� ���� �������� �� �. 3

void outprg4(prg a)
{
	cout << a.ime << ", " << a.durj << ": ";
}//������� ����� �� ���� �������� �� �. 4

void input(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Vuvedete danni za " << i << "-tia uchastnik: " << endl;
		inprg(a[i]);
		cin.ignore();
	}
}

void output(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
		outprg(a[i]);
}

void sort_tochki(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (a[j - 1].tochki < a[j].tochki)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}//���������� �� ����� � �������� ��� �� ������ �� ���������

void sort_durj(Tmasiv a, int n)
{
	for (int i = 2; i <= n; i++)
		for (int j = n; j >= i; j--)
			if (strcmp(a[j - 1].durj, a[j].durj) > 0 ||
				strcmp(a[j - 1].durj, a[j].durj) == 0 &&
				strcmp(a[j - 1].ime, a[j].ime) > 0)
			{
				prg x = a[j - 1]; a[j - 1] = a[j]; a[j] = x;
			}
}//���������� �� �. 3

void spravka_procent(Tmasiv a, int n)
{
	double suma = 0;
	for (int i = 1; i <= n; i++)
	{
		suma += a[i].tochki;
	}
	cout << "Suma na tochkite na vsichki uchastnici: " << suma << endl;
	//suma - ������ �� ������� �� ������ ��������� � �����������
	// double proc_uch;��� � �������� - proc_uch � ������� ����������
	// ��-������ (����� ���� ��� ������) �� ��������� ���� ������� ����������
	for (int i = 1; i <= n; i++)
	{
		//��������� � a[i].proc_uch, ��������� �� ������� � ������ �.
		a[i].proc_uch = a[i].tochki / suma * 100;
		outprg3(a[i]);
	}
}
void Spravka_medal(Tmasiv a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i].proc_uch >= 9.0) outprg4(a[i]);
		if (9.0 <= a[i].proc_uch && a[i].proc_uch < 12.0)
			cout << "Bronzov" << endl;
		if (12.0 <= a[i].proc_uch && a[i].proc_uch < 15.0)
			cout << "Sreburen " << endl;
		if (a[i].proc_uch >= 15.0)
			cout << "Zlaten " << endl;
	}
}

int main()
{
	cout << "Vuvedete broi uchastnici: " << endl;
	cin >> n;
	cin.ignore();
	input(masiv, n);

	cout << "Spisuk na vsicki uchastnici, sortiran po ocenka: " << endl;
	sort_tochki(masiv, n);
	output(masiv, n);

	cout << "Spravka durjava, ime, tochki, procent: " << endl;
	sort_durj(masiv, n);
	spravka_procent(masiv, n);

	cout << "Spravka ime, durjava, medal: " << endl;
	Spravka_medal(masiv, n);
	system("PAUSE");

}
