#include "AutoMan.h"

void AutoMan::setDateOfTakeId(char* dateOfTakeId)
{
	strcpy_s(this->dateOfTakeId, dateOfTakeId);
}
char* AutoMan::getDateOfTakeId()
{
	return dateOfTakeId;
}

AutoMan::~AutoMan()
{
	cout << " ����� � ����� :  " << dateOfTakeId << " �������! " << endl;
}



void AutoMan::AutoMan::print()
{
	Man::print();
	Car::print();
	LawBraker::print();
	cout << "\n\t ���� ��������� ����:  " << dateOfTakeId << endl;
}