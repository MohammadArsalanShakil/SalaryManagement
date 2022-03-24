#include "Admin.h"

Admin::Admin(string id, string name, string contact, string address, string email) :Person(id, name, contact, address)
{
	this->email = email;
}

void Admin::setemail(string email)
{
	this->email = email;
}

string Admin::getemail()
{
	return this->email;
}

void Admin::display()
{
	Person::display();
	cout << "Email: " << this->email << endl;
}

void Admin::show()
{
	this->display();
}
