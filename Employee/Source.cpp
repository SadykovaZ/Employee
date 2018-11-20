#include"Organization.h"
#include"Accountant.h"
#include"Director.h"
#include"Proger.h"

void main()
{
	Organization o("ABC", 100000);
	
	o.addEmployee(new Accountant("Pete", 30, "male", 3, 1));
	o.addEmployee(new Director("Olsen", 50, "female", 20));
	o.addEmployee(new Proger("Masha", 40, "female", 20, 6, 1));
	o.getInfo();
	o.delEmployee(Proger);
	system("pause");
}