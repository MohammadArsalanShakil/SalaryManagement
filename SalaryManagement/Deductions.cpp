#include "Deductions.h"

Deductions::Deductions(string id, float attendance, float loan, float tax)
{
	this->id = id; this->attendance = attendance; this->loan = loan; this->tax = tax;
}

void Deductions::setid(string id)
{
	this->id = id;
}

void Deductions::setattendance(float attendance)
{
	this->attendance = attendance;
}

void Deductions::setloan(float loan)
{
	this->loan = loan;
}

void Deductions::settax(float tax)
{
	this->tax = tax;
}

string Deductions::getid()
{
	return this->id;
}

float Deductions::getattendance()
{
	return this->attendance;
}

float Deductions::getloan()
{
	return this->loan;
}

float Deductions::gettax()
{
	return this->tax;
}

