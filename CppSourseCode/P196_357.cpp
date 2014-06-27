// P196_357.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
char s[45], *s2, *s3;
cout<<"Vuvedete ime:";
cin.getline(s,45);
s2=strchr(s, ' ');
s2++;
s3=strrchr(s, ' ');
s3++;

cout<<s[0]<<'.'<<s2[0]<<'.'<<s3<<endl;
}
