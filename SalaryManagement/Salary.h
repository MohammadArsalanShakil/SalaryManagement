#pragma once
#include "Employee.h"
#include "Deductions.h"
class Salary
{
private:
	string id;
	float basicsalary;
	float allowance;
	float bonus;
public:
	Salary(string id = "", float basicsalary = 0, float allowance = 0, float bonus = 0);
	void setid(string id);
	void setsalary(float basicsalary);
	void setallowance(float allowance);
	void setbonus(float bonus);
	string getid();
	float getsalary();
	float getallowance();
	float getbonus();
	Salary operator-(Deductions deduct);
};

