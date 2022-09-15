#pragma once
#include"Staff.h"

class ProductStaff : public Staff {
private:
	int numOfProduct;
	int salaryPerProduct;
public:
	ProductStaff();
	ProductStaff(string name, int age, string gender, string address, string position, int numOfProduct, int salaryPerProduct);
	int getNumOfProdct();
	void setNumOfProdct(int numOfProduct);
	int getSalaryPerProduct();
	void setSalaryPerProduct(int salaryPerProduct);
	int getSalary();
};
