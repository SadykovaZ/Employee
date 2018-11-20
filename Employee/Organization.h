#pragma once
#include"Employee.h"
#include<vector>
using namespace std;
class Organization
{
	vector<unique_ptr<Employee>> employees;
	int baseSalary;
	string name;
public:
	Organization(string name, int baseSalary);
	void addEmployee(Employee* employee);
	void delEmployee(Employee* employee);
	void getInfo() const;
	double getSalaryFund() const;

};

