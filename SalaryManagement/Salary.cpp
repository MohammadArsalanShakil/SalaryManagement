#include "Salary.h"

Salary::Salary(string id, float basicsalary, float allowance, float bonus)
{
	this->id = id; this->basicsalary = basicsalary; this->allowance = allowance; this->bonus = bonus;
}

void Salary::setid(string id)
{
	this->id = id;
}

void Salary::setsalary(float basicsalary)
{
	this->basicsalary = basicsalary;
}

void Salary::setallowance(float allowance)
{
	this->allowance = allowance;
}

void Salary::setbonus(float bonus)
{
	this->bonus = bonus;
}

string Salary::getid()
{
	return this->id;
}

float Salary::getsalary()
{
	return this->basicsalary;
}

float Salary::getallowance()
{
	return this->allowance;
}

float Salary::getbonus()
{
	return this->bonus;
}

Salary Salary::operator-(Deductions deduct)
{
	Salary newsalary(this->id);
	if(this->id == deduct.getid())
	{
		this->basicsalary -= deduct.getattendance();
		newsalary.setsalary(this->basicsalary);
		this->allowance -= deduct.getloan();
		newsalary.setallowance(this->allowance);
		this->bonus -= deduct.gettax();
		newsalary.setbonus(this->bonus);
	}
	return newsalary;
}
