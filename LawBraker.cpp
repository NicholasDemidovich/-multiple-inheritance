#include "LawBraker.h"


void LawBraker::setNameOfLaw(char* nameOfLaw)
{

	strcpy_s(this->nameOfLaw, nameOfLaw);
}
char* LawBraker::getNameOfLaw()
{
	return nameOfLaw;
}

LawBraker::~LawBraker()
{
	cout << " ������� ���������:  " << nameOfLaw << endl;
}

void LawBraker::print()
{
	cout << "\n\t ��� ���������:  " << nameOfLaw << endl;
}