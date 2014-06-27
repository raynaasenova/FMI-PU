// P196_359.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{

	char st1[45], st2[45], *res;
cout<<"Vuvedete tekstov niz: ";
cin.getline(st1,45);
cout<<"Vuvedete niz za tursene: ";
cin.getline(st2,45);
res=strstr(st1, st2);
if (res!=NULL) 

cout<<res<<endl;
}
