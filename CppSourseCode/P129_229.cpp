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
	cout << "Брой елементи на I-ви масив: "; int m; cin >> m;
	if (m<1 || m>100 || !cin) { cout << "Грешка!"; return 1;}
	cout << "Брой елементи на II-ри масив: "; int n; cin >> n;
	if (n<1 || n>100 || !cin) { cout << "Грешка!"; return 1; }
	cout << "Брой елементи на III-ти масив: "; int k; cin >> k;
	if (k<1 || k>100 || !cin) { cout << "Грешка!"; return 1; }

//а)
intvect a, b, c;
InputRan(a, m); InputRan(b, n); InputRan(c, k);
output(a, m); output(b, n); output(c, k);

int suma = 0, sumb = 0, sumc = 0;
double sra = 0;
suma += sum(a, m);
sumb += sum(b, n);
sumc += sum(c, k);
sra = (suma + sumb + sumc) * 1.0/ 3;
cout << "а) Сумата на масив I-ви е: " << suma << endl;
cout << "Сумата на масив II-ри е: " << sumb << endl;
cout << "Сумата на масив III-ти е: " << sumc << endl;
cout << "Средноаритметичното на сумите на масиви I, II и III е: " << sra << endl;

//б)
int pra = 1, prb = 1, prc = 1;
double srapr = 0;

	pra *= pr(a, m);
	prb *= pr(b, n);
	prc *= pr(c, k);			
	srapr += (pra + prb + prc) * 1.0 / 3;	
	
	if (pra == 1)
		cout << "б) В масив I-ви не се съдържат нечетни елементи."<< endl;
	else if (pra !=1)
	cout << "б) Произведението на ненулевите нечетни елементи на масив I-ви е: " << pra << endl;
	
	if (prb == 1)
		cout << "В масив II-ри не се съдържат нечетни елементи." << endl;
	else if (prb != 1)
	cout << "Произведението на ненулевите нечетни елементи на масив II-ри е: " << prb << endl;
	
	if (prc == 1)
		cout << "В масив III-ти не се съдържат нечетни елементи." << endl;
	else if (prc != 1)
	cout << "Произведението на ненулевите нечетни елементи на масив II-ри е: " << prc << endl;
	
	cout << "Средноаритметичното на произведенията на ненулевите нечетни елементи на масиви I, II и III е: " << srapr << endl;

//в)
int max = broy(a, m);
cout << "в) Брой намерени елементи от I-ви масив: " << max << endl;
int temp = broy(b,n);
cout << "Брой намерени елементи от II-ри масив: " << temp << endl;
if (max < temp)
	max = temp;
temp = broy(c, k);
cout << "Брой намерени елементи от III-ти масив: " << max << endl;
if (max < temp)
	max = temp;
cout << "Максимален брой намерени елементи: " << max << endl;
}

