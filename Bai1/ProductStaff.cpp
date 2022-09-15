#include"ProductStaff.h"

ProductStaff::ProductStaff() {}

ProductStaff::ProductStaff(string name, int age, string gender, string address, string position, int numOfProduct, int salaryPerProduct) :Staff(name, age, gender, address, position) {
	this->numOfProduct = numOfProduct;
	this->salaryPerProduct = salaryPerProduct;
}

int ProductStaff::getNumOfProdct() {
	return numOfProduct;
}

void ProductStaff::setNumOfProdct(int numOfProduct) {
	this->numOfProduct = numOfProduct;
}

int ProductStaff::getSalaryPerProduct() {
	return salaryPerProduct;
}

void ProductStaff::setSalaryPerProduct(int salaryPerProduct) {
	this->salaryPerProduct = salaryPerProduct;
}

int ProductStaff::getSalary() {
	return numOfProduct * salaryPerProduct;
}