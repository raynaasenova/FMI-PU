// �� �� ������� ��������, ����� �� �������� ��������������� ����� ������� ����������� ��������� �����. ������ ���������� � ������� �� �������� switch � ��� ����.
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
#include<math.h>

int main()
{
	SetConsoleOutputCP(1251);
	char n; 
	int m;
	cout<<"����, �������� 16-���� ����� �� �����������: "<<endl;
	cin>>n;
	
	if (n >= '0' && n <='9') 
		{
			m = n - '0'; 
		}
	else if (n >= 'A' && n <= 'F') 
		{
			m = n - 'A' + 10;
		}
	 
		else
			{
				cout<<"���������� �����!"<<endl;					
			}
		
	cout<<n<<" ���������� 16-4��� ����� ���������� �� 10-������ �����: "<<m<<endl;		
	return 0;
}
