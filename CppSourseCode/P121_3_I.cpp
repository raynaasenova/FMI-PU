// �� �� ������� ����������, ���� �� ������� ������ �� �������� �����. �� �� �������� ������� F(n)=1 + 1/2^4 + 1/3^4 + ... + 1/n^4
//�� �� ������� ��������, ����� ������� 2 ���� ����������� ����� a � b � ��������� F(a+b).F(|a-b|).
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<Math.h>


int main()
{
	//a
	int n;
	double z=0;
	do
	{
		cout<<"n = ";
		cin>>n;
	}
	while(n<=1 || n>=100);

	for (int i=1; i<=n;i++)
	z+= 1.0/pow(i,4);
	
	cout<<"z = "<<z<<endl;	

	//�
	int m;
	double l=0;
	do
	{
		cout<<"m = ";
		cin>>m;
	}
	while (m<=1 || m>=100);
	
	for (int i=1; i<=m;i++)
	l+=pow(i,1.0/m);

	cout<<"l = "<<l<<endl;


	return 0;
}

