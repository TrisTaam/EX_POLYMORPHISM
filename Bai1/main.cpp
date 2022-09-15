#include"Company.h"

int main() {
	int n;
	Company* company = new Company();
	while (1) {
		cout << "======================================\n";
		cout << "1. Add a staff.\n";
		cout << "2. Edit a staff.\n";
		cout << "3. Display all staff.\n";
		cout << "4. Display a staff's salary.\n";
		cout << "5. Display sum of all staff's salary.\n";
		cout << "6. Exit\n";
		cout << "======================================\n";
		cout << "Enter number: ";  cin >> n;
		if (n == 1) company->addStaff();
		else if (n == 2) company->editStaff();
		else if (n == 3) company->displayAllStaff();
		else if (n == 4) company->displaySalary();
		else if (n == 5) company->getSumSalary();
		else break;
	}
}