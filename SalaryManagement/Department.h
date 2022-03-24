#pragma once
#include <string>
#include <iostream>
using namespace std;

class Department
{
private:
	string departmentname;
	string designation;
	string headofdepartment;
public:
	Department(string departmentname = "", string designation = "", string headofdepartment = "");
	void setdeptname(string departmentname);
	void setdesignation(string designation);
	void sethod(string headofdepartment);
	string getdeptname();
	string getdesignation();
	string gethod();
	void display();
};

