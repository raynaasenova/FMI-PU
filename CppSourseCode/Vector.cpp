// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

 const int constmax=50;
 typedef double vector[constmax];
 void input(vector a, unsigned int n)
   { for (int i=0;i<n;i++)
      {  cout<<"a["<<i<<"]=";
	 cin>>a[i];
      }
   }
 void output(vector a, unsigned int n)
   { for (int i=0;i<n;i++)
      {  cout<<"a["<<i<<"]="<<a[i]<<endl;
      }
   }
int main()
{ vector a;
  int n;
  cout<<"Vyvedi broi elementi na masiva:n>=1:";cin>>n;
  if (n<1||!cin) {cout<<"Error!";system("PAUSE");return 1;}
  input(a,n);
  output(a,n);
  return 0; 
  system("PAUSE");
}
