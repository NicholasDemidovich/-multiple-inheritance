

#include "stdio.h"
#include <iostream>
#include "Man.h"
#include "Car.h"
#include "LawBraker.h"
#include "AutoMan.h"
#include "Police.h"
#include "func.h"

#pragma warning(disable:4996)
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	int sw, maxCountLawBrakers, factCountLawBrakers = 0;
	Police* dep[100];
	bool fl = false;
	while (true)
	{
		cout << "\n\t 0 - �����, 1 - ������� �����(����), 2 - �������� ������������ � ���"
			<< "\n\t 3 - �����, 4 - ������� ������������:    ";
		cin >> sw;
		switch (sw)
		{
		case 0:
			return;
		case 1:
			createDepartment(&maxCountLawBrakers);
			fl = true;
			break;
		case 2:
			if (fl)
			{
				enterAutoMan(maxCountLawBrakers, &factCountLawBrakers, dep);///+++++++=====
			}
			break;
		case 3:
			if (factCountLawBrakers > 0)
				printPoliceDep(factCountLawBrakers, dep);
			break;
		case 4:
			if (factCountLawBrakers > 0)
				delAutoMan(&factCountLawBrakers, dep);
			break;
		default:
			cout << "\n\t ������� 1 - 4!!! ";
			break;
		}
	}
}


