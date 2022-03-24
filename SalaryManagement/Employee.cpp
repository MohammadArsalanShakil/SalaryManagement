#include "Employee.h"

Employee::Employee(string id, string name, string contact, string address, string department) :Person(id, name, contact, address)
{
	this->department = department;
}

void Employee::setdept(string department)
{
	this->department = department;
}

string Employee::getdept()
{
	return this->department;
}

void Employee::display()
{
	Person::display();
	cout << "Department: " << this->department << endl;
}

void Employee::show()
{
	this->display();
}
