//�� �� �������� ��������� cos(sin(x)) � �������� [0, 1.4] ��� ������ 0.2 �������.

#include "stdafx.h"
#include<iostream>
#include<Math.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	for (double x = 0; x <= 1.4; x += 0.2)
	{
		cout << "cos(sin(" << setprecision(9) << setw(3) << x << ")) = " << cos(sin(x)) << '\n';
	}
	return 0;
}

