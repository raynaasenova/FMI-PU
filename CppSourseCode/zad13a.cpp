//Да се запише програма, която въвежда положително седемцифрено число и извежда неговата k-та цифра(1<=k<=7), като цифрите се броят а) в посока отляво-надясно; б) в посока отдясно-наляво;
#include "stdafx.h"
#include<iostream>
#include<windows.h>
using namespace std;
int main()
//а)
{
   SetConsoleOutputCP(1251);
   int a,s,n,e,k;
   cout<<"Въведете седемцифрено положително число: ";
   cin>>a;
   cout<<"Въведете цяло число в [1,7]:";
   cin>>k;   
   n=pow(10,7-k);
   s= a / n;
   e= s % 10;
   cout<<"Числото до "<<k<<"-а цифра е: "<<s<<endl;
   cout<<k<<"-а цифра е:"<<e<<endl;
   return 0;
}