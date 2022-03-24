#pragma once
#include "Person.h"
class Admin : public Person
{
private:
	string email;
public:
	Admin(string id = "", string name = "", string contact = "", string address = "", string email = "");
	void setemail(string email);
	string getemail();
	void display();
	void show();
};

