//min_max
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

 const int constmax=50;
 typedef double vector[constmax];
 void input(double vector[], unsigned int n)
   { for (int i=0;i<n;i++)
      {  cout<<"vector["<<i<<"]=";
	 cin>>vector[i];
      }
   }
 void minmax(vector a, int n,double& min, double& max)
   { min=a[1];max=a[1];
     for (int i=0;i<n;i++)
     { if (min>a[i]) min=a[i];
       if (max<a[i]) max=a[i];
     }
   }
int main()
{ 
	SetConsoleOutputCP(1251);
  vector a;
  int n; double min,max;
  cout<<"Въведете брой елементи на масива: n>=1: ";cin>>n;
  if (n<1||!cin) {cout<<"Error!";return 1;}
  input(a,n);
  minmax(a,n,min,max);
  cout<<" Минимален елемент: "<<min
      <<" Максимален елемент: "<<max; 
  }
