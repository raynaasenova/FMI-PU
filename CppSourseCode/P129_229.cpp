// P129_229.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime>
#include <windows.h>
using namespace std;

typedef int intvect[100];
void InputRan(intvect a, int n)
{
	for (int i = 0; i < n; i++) 
		a[i] = rand() % 201 - 100;
}

void output(intvect a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int broy(intvect a, int n)
{
	int br = 0;
	for (int i = 0; i < n; i++)
		if (i%2 == 0 && a[i] >= -30 && a[i] <= 30)
		br++;
		
	return br;
}

int sum(intvect a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int pr(intvect a, int n)
{
	int pr = 1, i;
	for (int i = 0; i < n; i++)
		if (a[i] != 0 && a[i] % 2 != 0)
		pr *= a[i];		
	return pr;
}

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	cout << "���� �������� �� I-�� �����: "; int m; cin >> m;
	if (m<1 || m>100 || !cin) { cout << "������!"; return 1;}
	cout << "���� �������� �� II-�� �����: "; int n; cin >> n;
	if (n<1 || n>100 || !cin) { cout << "������!"; return 1; }
	cout << "���� �������� �� III-�� �����: "; int k; cin >> k;
	if (k<1 || k>100 || !cin) { cout << "������!"; return 1; }

//�)
intvect a, b, c;
InputRan(a, m); InputRan(b, n); InputRan(c, k);
output(a, m); output(b, n); output(c, k);

int suma = 0, sumb = 0, sumc = 0;
double sra = 0;
suma += sum(a, m);
sumb += sum(b, n);
sumc += sum(c, k);
sra = (suma + sumb + sumc) * 1.0/ 3;
cout << "�) ������ �� ����� I-�� �: " << suma << endl;
cout << "������ �� ����� II-�� �: " << sumb << endl;
cout << "������ �� ����� III-�� �: " << sumc << endl;
cout << "������������������� �� ������ �� ������ I, II � III �: " << sra << endl;

//�)
int pra = 1, prb = 1, prc = 1;
double srapr = 0;

	pra *= pr(a, m);
	prb *= pr(b, n);
	prc *= pr(c, k);			
	srapr += (pra + prb + prc) * 1.0 / 3;	
	
	if (pra == 1)
		cout << "�) � ����� I-�� �� �� �������� ������� ��������."<< endl;
	else if (pra !=1)
	cout << "�) �������������� �� ���������� ������� �������� �� ����� I-�� �: " << pra << endl;
	
	if (prb == 1)
		cout << "� ����� II-�� �� �� �������� ������� ��������." << endl;
	else if (prb != 1)
	cout << "�������������� �� ���������� ������� �������� �� ����� II-�� �: " << prb << endl;
	
	if (prc == 1)
		cout << "� ����� III-�� �� �� �������� ������� ��������." << endl;
	else if (prc != 1)
	cout << "�������������� �� ���������� ������� �������� �� ����� II-�� �: " << prc << endl;
	
	cout << "������������������� �� �������������� �� ���������� ������� �������� �� ������ I, II � III �: " << srapr << endl;

//�)
int max = broy(a, m);
cout << "�) ���� �������� �������� �� I-�� �����: " << max << endl;
int temp = broy(b,n);
cout << "���� �������� �������� �� II-�� �����: " << temp << endl;
if (max < temp)
	max = temp;
temp = broy(c, k);
cout << "���� �������� �������� �� III-�� �����: " << max << endl;
if (max < temp)
	max = temp;
cout << "���������� ���� �������� ��������: " << max << endl;
}

