#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class publication {
public:
	string nameBook;
	float cost;

	virtual void getdata() {
		cout << "Enter Name book : ";
		cin >> nameBook;
		cout << "Enter Price book : ";
		cin >> cost;
	}
	 virtual void putdata() {
		cout <<"\t Name book - "<< nameBook <<" Price book - "<<cost <<  endl ;
	}

};
class book : public publication {
private:
	int numberlist;
public:

	bool isOversize() { if (numberlist >= 800) { cout << "\nSize exceeded!!!\n"; } }

	void getdata() override {
		cout << "Enter  number list : ";
		cin >> numberlist;
		publication::getdata();
	}
	void putdata() override {
		publication::putdata();
		cout <<"\tNumber list - "<< numberlist << endl;
	}
};
class type : public publication {
private:
	float timeMin;
public:
	bool isOversize() { if (timeMin >= 90) { cout << "\nSize exceeded!!!\n"; } }
	void getdata() override {
		cout << "Enter time Minute : ";
		cin >> timeMin;
		publication::getdata();
	}
	void putdata() override {
		cout <<"Minute - "<< timeMin << endl;
		publication::putdata();
	}
};
class freeValue {
private:
	int x, y, z;
protected:
public:
	double work, num1, num2;
	freeValue() {
		num1 = 0;
		x = 0;
		y = 0;
		z = 0;
	}
	freeValue(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double getN() {
		cout << "NUM1 : " << num1 << endl;
		return num1;
	}
	virtual double Work() {
		 work = num1 * num2;
		 cout << "\nWork : " << work << endl;
		return work;
	}
	~freeValue() {	}
};
class KR : public freeValue {
private:
	int x, y, z;
public:
	KR() {
		x = 0;
		y = 0;
		z = 0;
	}
	KR(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double math() {
		double D; D = pow(y, 2) - 4 * x*z;
		double x1, x2;
		x1 = (y + sqrt(D)) / 2 * x;
		x2 = (y - sqrt(D)) / 2 * x;
		cout <<"x1 : "<< x1 << "\tx2 : " << x2<<endl;
		freeValue::num1 = x1;
		freeValue::num2 = x2;
		return x1, x2;
	}
};
class PKR :	public freeValue {
private:
	int x, y, z;
public:
	PKR() {
		x = 0;
		y = 0;
		z = 0;
	}
	PKR(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double math() {
		double D;
		double x1, x2;
		if (x != 1) {
			y = y/x;
			x = x / x;
			z = x / x;
		}
		
		D = pow(y, 2) - 4 * x*z;
		x1 = (y + sqrt(D)) / 2 * x;
		x2 = (y - sqrt(D)) / 2 * x;
		cout << "x1 : " << x1 << "\tx2 : " << x2 << endl;
		freeValue::num1 = x1;
		freeValue::num2 = x2;
		return x1, x2;
	}
};
int main(int argc, char** argv) {
	freeValue *fv[2];
	KR kr(1,3,-4);
	kr.math();
	PKR pkr(2,-4,2);
	pkr.math();
	fv[0] = & kr;
	fv[1] = &pkr;
	cout << endl;
	fv[0]->Work();
	//cout << endl;
	fv[1]->Work();
	/*
	publication *pubarr[2];

		pubarr[0] = new book;		pubarr[0]->getdata();
		pubarr[1] = new type;		pubarr[1]->getdata();

	for (int i = 0; i < 2; i++) {
		pubarr[i]->putdata();
	}
	for (int i = 0; i < 2; i++) {
		delete pubarr[i];
	}
	*/

	system("pause");
	return 0;
}