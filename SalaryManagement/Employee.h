#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	string department;
public:
	Employee(string id = "", string name = "", string contact = "", string address = "", string department = "");
	void setdept(string department);
	string getdept();
	void display();
	void show();
};

