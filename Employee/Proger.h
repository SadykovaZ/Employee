#pragma once
#include "Employee.h"
class Proger :
	public Employee
{
	int cntLang;
	bool hasEdu;

public:
	Proger(string name, int age, string sex, int workYears, int cntLang, bool hasEdu);
	void setCntLang(int cntLang);
	int getCntLang() const { return cntLang; }

	void setHasEdu(bool hasEdu);
	bool getHasEdu() const { return hasEdu; }

	void info() const override;
	double getSalary() const override;

};

