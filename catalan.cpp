/*
"Tavi" Ioane Tenari
CSS342
10/22/16
Lab2 - catalan.cpp
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int catalan(int num);

int main(int argc, char* argv[])
{
	if ((argc == 2) && ((stoi(argv[1])) >=0 )) 
	{
		cout << catalan(stoi(argv[1])) << endl;
		system("pause");
		return 0;
	}
	else 
	{
		cout << "Program call must be followed by one integer greater than or equal to zero." << endl;
	}
}

int catalan(int num)
{
	if (!(num <= 1))
	{
		int catSum = 0;
		for (int i = 0; i < num; i++)
		{
			catSum += catalan(i) * catalan((num - 1) - i);
		}
		return catSum;
	}
	else
	{
		return 1;
	}
}

