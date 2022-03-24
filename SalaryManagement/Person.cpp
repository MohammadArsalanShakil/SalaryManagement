#include "Person.h"

Person::Person(string id, string name, string contact, string address)
{
	this->id = id; this->name = name; this->contact = contact; this->address = address;
}

void Person::setid(string id)
{
	this->id = id;
}

void Person::setname(string name)
{
	this->name = name;
}

void Person::setcontact(string contact)
{
	this->contact = contact;
}

void Person::setaddress(string address)
{
	this->address = address;
}

string Person::getid()
{
	return this->id;
}

string Person::getname()
{
	return this->name;
}

string Person::getcontact()
{
	return this->contact;
}

string Person::getaddress()
{
	return this->address;
}

void Person::display()
{
	cout << "Id: " << this->id << endl;
	cout << "Name: " << this->name << endl;
	cout << "Contact: " << this->contact << endl;
	cout << "Address: " << this->address << endl;
}
