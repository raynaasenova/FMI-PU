//�� �� ������� �������, ����� ��������� �� ������ n �� ���� �����. ���� ������� �� �� �������� � ��������, � ����� �� �������� ��� ���������� ����� k, l, m � �� ������ �� ���������� ��� ����, ��������� � k, l, � m ���� �����, ���� ������ ������ � "#, ������� "@", � ������� "x".
//Primer1A

#include "stdafx.h"
#include<iostream>
using namespace std;

void znak(int n, char c)
{
	for (int i=1; i <= n; i++)
		cout << c;
		cout << '\n';
}

int main()
{
	int k, l, m;
	cout << "k, l, m = "; cin >> k >> l >> m;
	znak(k, '#');
	znak(l, '@');
	znak(m, 'x');
}

