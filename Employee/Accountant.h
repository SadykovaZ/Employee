#pragma once
#include "Employee.h"
class Accountant :
	public Employee
{
	bool know1C;

public:
	Accountant(string name, int age, string sex, int workYears, bool know1C);
	void setKnow1C(bool know1C);
	bool getknow1C() const { return know1C; }

	void info() const override;
	double getSalary() const override;
	
};

