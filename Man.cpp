#include "Man.h"

void Man::setSurname(char* surname)
{

	strcpy_s(this->surname, surname);
}
char* Man::getSurname()
{
	return surname;
}
void Man::setDateOfBirth(int dateOfBirth)
{
	this->dateOfBirth = dateOfBirth;
}
int Man::getDateOfBirth()
{
	return dateOfBirth;
}
void Man::setId(int id)
{
	this->id = id;
}
int Man::getId()
{
	return id;
}

Man::~Man()
{
	cout << " ������ ������� � id:  " << id << endl;
}


void Man::print()
{
	cout << "\n\t �������:  " << surname << " ���� ��������: " << dateOfBirth << "  ID: " << id << endl;
}