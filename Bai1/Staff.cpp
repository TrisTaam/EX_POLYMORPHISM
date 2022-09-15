#include"Staff.h"

Staff::Staff(){}

Staff::Staff(string name, int age, string gender, string address, string position) {
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->address = address;
	this->position = position;
}

string Staff::getName() {
	return name;
}

void Staff::setName(string name) {
	this->name = name;
}

int Staff::getAge() {
	return age;
}

void Staff::setAge(int age) {
	this->age = age;
}

string Staff::getGender() {
	return gender;
}

void Staff::setGender(string gender) {
	this->gender = gender;
}

string Staff::getAddress() {
	return address;
}

void Staff::setAddress(string address) {
	this->address = address;
}

string Staff::getPosition() {
	return position;
}

void Staff::setPosition(string position) {
	this->position = position;
}

void Staff::displayStaff() {
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
	cout << "Gender: " << gender << "\n";
	cout << "Address: " << address << "\n";
	cout << "Position: " << position << "\n";
}