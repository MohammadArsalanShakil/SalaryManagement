#pragma once
#include "Employee.h"
class Deductions
{
private:
	string id;
	float attendance;
	float loan;
	float tax;
public:
	Deductions(string id = "", float attendance = 0, float loan = 0, float tax = 0);
	void setid(string id);
	void setattendance(float attendance);
	void setloan(float loan);
	void settax(float tax);
	string getid();
	float getattendance();
	float getloan();
	float gettax();
};

