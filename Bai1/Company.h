#pragma once
#include "OfficeStaff.h"
#include "ProductStaff.h"

class Company {
private:
	vector<Staff*> staff;
public:
	Company();
	Company(vector<Staff*> staff, int sumSalary);
	vector<Staff*> getStaff();
	void setStaff(vector<Staff*> staff);
	void addStaff();
	void editStaff();
	void displayAllStaff();
	void displaySalary();
	void getSumSalary();
};