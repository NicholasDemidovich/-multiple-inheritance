#include "Car.h"


void Car::setMark(char* mark)
{

	strcpy_s(this->mark, mark);
}
char* Car::getMark()
{
	return mark;
}
void Car::setCost(double cost)
{
	this->cost = cost;
}
double Car::getCost()
{
	return cost;
}

Car::~Car()
{
	cout << " ������a ������ � ������:  " << mark << endl;
}

void Car::print()
{
	cout << "\n\t �����:  " << mark << " ���������: " << cost << endl;
}