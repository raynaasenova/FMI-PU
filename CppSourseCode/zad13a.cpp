//�� �� ������ ��������, ����� ������� ����������� ������������ ����� � ������� �������� k-�� �����(1<=k<=7), ���� ������� �� ����� �) � ������ ������-�������; �) � ������ �������-������;
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
int main()
//�)
{
   SetConsoleOutputCP(1251);
   int a,s,n,e,k;
   cout<<"�������� ������������ ����������� �����: ";
   cin>>a;
   cout<<"�������� ���� ����� � [1,7]:";
   cin>>k;   
   n=pow(10,7-k);
   s= a / n;
   e= s % 10;
   cout<<"������� �� "<<k<<"-� ����� �: "<<s<<endl;
   cout<<k<<"-� ����� �:"<<e<<endl;
   return 0;
}