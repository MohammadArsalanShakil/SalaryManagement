#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string id;
	string name;
	string contact;
	string address;
public:
	Person(string id = "", string name = "", string contact = "", string address = "");
	void setid(string id);
	void setname(string name);
	void setcontact(string contact);
	void setaddress(string address);
	string getid();
	string getname();
	string getcontact();
	string getaddress();
	void display();
	virtual void show() = 0;
};

