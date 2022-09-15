#include"Company.h"

Company::Company(){}

Company::Company(vector<Staff*> staff, int sumSalary) {
	this->staff = staff;
}

vector<Staff*> Company::getStaff() {
	return staff;
}

void Company::setStaff(vector<Staff*> staff) {
	this->staff = staff;
}

void Company::addStaff() {
	string name, gender, address, position;
	int age;
	cout << "Name: "; cin.ignore(); getline(cin, name);
	cout << "Age: "; cin >> age; cin.ignore();
	cout << "Gender: "; getline(cin, gender);
	cout << "Address: "; getline(cin, address);
	cout << "Position: "; getline(cin, position);
	if (position == "office staff") {
		int basicSalary, numOfWork;
		cout << "Basic salary: "; cin >> basicSalary; cin.ignore();
		cout << "Number of work: "; cin >> numOfWork; cin.ignore();
		OfficeStaff* tmp = new OfficeStaff(name, age, gender, address, position, basicSalary, numOfWork);
		staff.push_back(tmp);
	}
	else {
		int numOfProduct, salaryPerProduct;
		cout << "Number of product: "; cin >> numOfProduct; cin.ignore();
		cout << "Salary per product: "; cin >> salaryPerProduct; cin.ignore();
		OfficeStaff* tmp = new OfficeStaff(name, age, gender, address, position, numOfProduct, salaryPerProduct);
		staff.push_back(tmp);
	}
}

void Company::editStaff() {
	string name, gender, address, position;
	int age;
	cout << "Name: "; cin.ignore(); getline(cin, name);
	for (auto &x : staff)
		if (x->getName() == name) {
			cout << "New name: "; getline(cin, name);
			x->setName(name);
			cout << "New age: "; cin >> age; cin.ignore();
			x->setAge(age);
			cout << "New gender: "; getline(cin, gender);
			x->setGender(gender);
			cout << "New address: "; getline(cin, address);
			x->setAddress(address);
			cout << "New position: "; getline(cin, position);
			x->setPosition(position);
		}
}

void Company::displayAllStaff() {
	for (auto x : staff) {
		cout << "---\n";
		x->displayStaff();
	}
}

void Company::displaySalary() {
	string name;
	cout << "Name: "; cin.ignore(); getline(cin, name);
	for (auto x : staff)
		if (x->getName() == name) cout << "Salary: " << x->getSalary() << "\n";
}

void Company::getSumSalary() {
	int sum = 0;
	for (auto x : staff) sum += x->getSalary();
	cout << "Sum of all staff's salary: " << sum << "\n";
}