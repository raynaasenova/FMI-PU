// P114_209_j.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	for(int i =1; i<=100; i++)
	{
		int x= rand() % 133;
		if (x < 26 || x >=100)
		cout<<i<<":"<<x<<endl;
	}
	return 0;
}

