// P190_348.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	char s[255];
	cout<<"Vuvedete tekst do 255 simvola!";
	cin.getline(s,256);
	int br=0;
	for (int i=0; i<strlen(s); i++)
		if (s[i]==',') 
			br++;
	cout<<"Znakut ',' se sreshta v teksta "<<br<<" puti.";
}
