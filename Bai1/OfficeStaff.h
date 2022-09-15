#pragma once
#include"Staff.h"

class OfficeStaff: public Staff {
private:
	int basicSalary;
	int numOfWork;
public:
	OfficeStaff();
	OfficeStaff(string name, int age, string gender, string address, string position, int basicSalary, int numOfWork);
	int getBasicSalary();
	void setBasicSalary(int basicSalary);
	int getNumOfWork();
	void setNumOfWork(int numOfWork);
	int getSalary();
};
