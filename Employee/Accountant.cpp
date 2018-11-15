#include "Accountant.h"
Accountant::Accountant(string name, int age, string sex, int workYears, bool know1C)
	:Employee(name, age, sex, workYears)
{
	this->know1C = know1C;
}

void Accountant::setKnow1C(bool know1C)
{
	this->know1C = know1C;
}

void Accountant::info() const
{
	Employee::info();
	cout << "\nKnowledge of 1C " <<boolalpha <<know1C << endl;
}

double Accountant::getSalary() const
{
	double coef = getWorkYears()*0.1;
	coef += know1C * 0.05;	
	return coef;
}
