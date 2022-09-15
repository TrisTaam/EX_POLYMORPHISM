#pragma once
#include"Header.h"

class Staff {
private:
	string name;
	int age;
	string gender;
	string address;
	string position;
public:
	Staff();
	Staff(string name, int age, string gender, string address, string positon);
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	string getGender();
	void setGender(string gender);
	string getAddress();
	void setAddress(string address);
	string getPosition();
	void setPosition(string position);
	virtual int getSalary()=0;
	void displayStaff();
};