#include"OfficeStaff.h"

OfficeStaff::OfficeStaff() {}

OfficeStaff::OfficeStaff(string name, int age, string gender, string address, string position, int basicSalary, int numOfWork) :Staff(name, age, gender, address, position) {
	this->basicSalary = basicSalary;
	this->numOfWork = numOfWork;
}

int OfficeStaff::getBasicSalary() {
	return basicSalary;
}

void OfficeStaff::setBasicSalary(int basicSalary) {
	this->basicSalary = basicSalary;
}

int OfficeStaff::getNumOfWork() {
	return numOfWork;
}

void OfficeStaff::setNumOfWork(int numOfWork) {
	this->numOfWork = numOfWork;
}

int OfficeStaff::getSalary() {
	return basicSalary * numOfWork;
}