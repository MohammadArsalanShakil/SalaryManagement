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

//----------------------------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------------------------

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

Employee::Employee(string id, string name, string contact, string address, string department) :Person(id, name, contact, address)
{
	this->department = department;
}

void Employee::setdept(string department)
{
	this->department = department;
}

string Employee::getdept()
{
	return this->department;
}

void Employee::display()
{
	Person::display();
	cout << "Department: " << this->department << endl;
}

void Employee::show()
{
	this->display();
}

//----------------------------------------------------------------------------------------------------------------------------------------

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

Department::Department(string departmentname, string designation, string headofdepartment)
{
	this->departmentname = departmentname; this->designation = designation; this->headofdepartment = headofdepartment;
}

void Department::setdeptname(string departmentname)
{
	this->departmentname = departmentname;
}

void Department::setdesignation(string designation)
{
	this->designation = designation;
}

void Department::sethod(string headofdepartment)
{
	this->headofdepartment = headofdepartment;
}

string Department::getdeptname()
{
	return this->departmentname;
}

string Department::getdesignation()
{
	return this->designation;
}

string Department::gethod()
{
	return this->headofdepartment;
}

void Department::display()
{
	cout << "Department name: " << this->departmentname << endl;
	cout << "Designation: " << this->designation << endl;
	cout << "Head of department: " << this->headofdepartment << endl;
}
//----------------------------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------------------------

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
	void display();
};

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
	if (this->id == deduct.getid())
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

void Salary::display()
{
	cout << "Id: " << this->id << endl;
	cout << "Salary: " << this->basicsalary << endl;
	cout << "Allowance: " << this->allowance << endl;
	cout << "Bonus: " << this->bonus << endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------

void main()
{
	Admin administrator;
	Employee employ;
	string value;
	string id;
	string name;
	string contact;
	string address;
	cout << "Enter 1 for Administrator\nEnter 2 for Employee\n";
	int choice;
	cin >> choice;
	cout << "Enter id: ";
	cin >> id;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Contact: ";
	cin >> contact;
	cout << "Enter Address: ";
	cin >> address;
	if (choice == 1)
	{
		cout << "Enter email: ";
		cin >> value;
		Admin admin(id, name, contact, address, value);
		administrator = admin;
	}
	else if (choice == 2)
	{
		cout << "Enter department: ";
		cin >> value;
		Employee emp(id, name, contact, address, value);
		employ = emp;
	}
	else
		cout << "Wrong selection" << endl;
	if (choice == 1)
		administrator.display();
	else if (choice == 2)
		employ.display();
	string depart;
	Department dept;
	cout << "Enter department name: ";
	cin >> depart;
	dept.setdeptname(depart);
	cout << "Enter designation: ";
	cin >> depart;
	dept.setdesignation(depart);
	cout << "Enter name of head of department: ";
	cin >> depart;
	dept.sethod(depart);
	dept.display();
	string salary;
	float salaryv;
	Salary sal;
	cout << "Enter id: ";
	cin >> salary;
	sal.setid(salary);
	cout << "Enter basic salary: ";
	cin >> salaryv;
	sal.setsalary(salaryv);
	cout << "Enter Allowance: ";
	cin >> salaryv;
	sal.setallowance(salaryv);
	cout << "Enter bonus: ";
	cin >> salaryv;
	sal.setbonus(salaryv);
	sal.display();
	string deduction;
	float deductionv;
	Deductions deduct;
	cout << "Enter id: ";
	cin >> deduction;
	deduct.setid(deduction);
	cout << "Enter Attendance: ";
	cin >> deductionv;
	deduct.setattendance(deductionv);
	cout << "Enter Loan: ";
	cin >> deductionv;
	deduct.setloan(deductionv);
	cout << "Enter Tax: ";
	cin >> deductionv;
	deduct.settax(deductionv);
	sal = sal - deduct;
	sal.display();
	system("pause");
}


