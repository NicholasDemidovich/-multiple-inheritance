#pragma once
#include <iostream>
using namespace std;
#include "Police.h"
void createDepartment(int* maxCountAutoMans)
{
	cout << "\n\t ������� ���-�� ������������ ������� � ������ ������� ���:  ";
	cin >> *maxCountAutoMans;
}


void enterAutoMan(int maxCountAutoMan, int* factCountAutoMan, Police* dep[])
{

	int n = *factCountAutoMan;
	if (n == maxCountAutoMan) { cout << "\n\t ����� ���!!!\n"; return; }

	char surname[30];
	int dateOfBirth;
	int id;

	char mark[30];
	double cost;

	char nameOfLaw[30];

	char dateOfTakeId[30];

	char adresOfDepartnment[30];
	int idDepartment;

	dep[n] = new Police();
	cout << "\n\t ������� ������� �������������:  ";
	cin >> surname;
	dep[n]->setSurname(surname);

	cout << "\n\t ������� ���� ��������:  ";
	cin >> dateOfBirth;
	dep[n]->setDateOfBirth(dateOfBirth);

	cout << "\n\t ������� id �������������:  ";
	cin >> id;
	dep[n]->setId(id);

	cout << "\n\t ������� ����� ������:  ";
	cin >> mark;
	dep[n]->setMark(mark);

	cout << "\n\t ������� ��������� ������:  ";
	cin >> cost;
	dep[n]->setCost(cost);

	cout << "\n\t ������� ��� ���������:  ";
	cin >> nameOfLaw;
	dep[n]->setNameOfLaw(nameOfLaw);

	cout << "\n\t ������� ���� ��������� ����:  ";
	cin >> dateOfTakeId;
	dep[n]->setDateOfTakeId(dateOfTakeId);

	cout << "\n\t ������� ����� ������:  ";
	cin >> adresOfDepartnment;
	dep[n]->setAdresOfDeprtment(adresOfDepartnment);

	cout << "\n\t ������� id ������:  ";
	cin >> idDepartment;
	dep[n]->setIdDepartment(idDepartment);
	(*factCountAutoMan)++;
}

void delAutoMan(int* factCountAutoMan, Police* dep[])
{
	char surname[20];
	cout << "\n\t ������� ������� ���������� �������������:  ";
	cin >> surname;
	for (int i = 0; i < *factCountAutoMan; i++)
	{
		if (strcmp(surname, dep[i]->Man::getSurname()) == 0)
		{
			delete dep[i];
			for (int j = i; j < (*factCountAutoMan) - 1; j++)
				dep[j] = dep[j + 1];
			(*factCountAutoMan)--;
			return;
		}
	}
	cout << "\n\t ������ ������������� ���:  " << surname << endl;
}

void printPoliceDep(int factCountAutoMan, Police* dep[])
{
	cout << "\n\t\t ������ �������������� � ������� " << endl;
	for (int i = 0; i < factCountAutoMan; i++) dep[i]->print();
}