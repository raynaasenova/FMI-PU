//�� �� ������� �������, ����� ��������� �� ������ n �� ���� ����� #. ���� ������� �� �� �������� � ��������, � ����� �� �������� ��� ���������� ����� k, l, m � �� ������ �� ���������� ��� ����, ��������� � k, l, � m ���� ����� #.
//Primer1

#include "stdafx.h"
#include<iostream>
using namespace std;
void diez(int n)
{
	for (int i = 1; i <= n; i++)
		cout << '#';
	cout << '\n';
}

int main()
{
	int k, l, m;
	cout << "k, l, m = " << endl;
	cin >> k >> l >> m;

	diez(k);
	diez(l);
	diez(m);
	return 0;
}