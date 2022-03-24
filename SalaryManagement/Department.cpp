#include "Department.h"

Department::Department(string departmentname, string designation, string headofdepartment)
{
	this->departmentname = departmentname; this->designation = designation; this->headofdepartment = headofdepartment;
}

void Department::setdeptname(string departmentname)
{
	this->departmentname = departmentname;
}

void Department::setdesignation(string designation)
{
	this->designation = designation;
}

void Department::sethod(string headofdepartment)
{
	this->headofdepartment = headofdepartment;
}

string Department::getdeptname()
{
	return this->departmentname;
}

string Department::getdesignation()
{
	return this->designation;
}

string Department::gethod()
{
	return this->headofdepartment;
}

void Department::display()
{
	cout << "Department name: " << this->departmentname << endl;
	cout << "Designation: " << this->designation << endl;
	cout << "Head of department: " << this->headofdepartment << endl;
}
