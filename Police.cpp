#include "Police.h"

void Police::setAdresOfDeprtment(char* adres)
{
	strcpy_s(this->adresOfDepartnment, adres);
}
char* Police::getAdresOfDepartment()
{
	return adresOfDepartnment;
}
void  Police::setIdDepartment(int idDep)
{
	this->idDepartment = idDep;
}
int  Police::getId()
{
	return idDepartment;
}

Police::~Police()
{
	cout << " ����� � id :  " << idDepartment << " ������! " << endl;
}


void Police::print()
{
	AutoMan::print();
	cout << "\n\t ����� ������:  " << adresOfDepartnment << "  Id ������:  " << idDepartment << endl;
	cout << "\t ===================================" << endl;
}