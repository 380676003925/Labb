#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class sales {
private:
	int numberBook;
	float array[3];
public:
	float getNB(){
		for (int i = 0; i < 3; i++) {
			cout << "Enter number book sold for one month : ";
			cin >> array[i];
		}
		return *array;
	}
	void printNB() {
		for (int i = 0; i < 3; i++) {
			cout << array[i] << "\t";
		}
	}
};
class publication : public sales{
public:
	string nameBook;
	float cost;

	string getdata() {
		cout << "Enter Name book : ";
		cin >> nameBook;
		return nameBook;
	}
	void putdata() {
		cout << nameBook << endl;
	}
};
class book : public publication {
private:
	int numberlist;
public:
	int getdata() {
		cout << "Enter  number list : ";
		cin >> numberlist;
		
		publication::getdata();
		sales::getNB();

		return  numberlist;
	}
	void putdata() {
		cout << numberlist << endl;
		publication::putdata();
		sales::printNB() ;
		cout << endl;
	}
};
class type : public publication   {
private:
	float timeMin;
public:
	float getdata() {
		cout << "Enter time Minute : ";
		cin >> timeMin;
		
		publication::getdata();
		sales::getNB();

		return timeMin;
	}
	void putdata() {
		cout << timeMin << endl;
		publication::putdata();
		sales::printNB();
		cout << endl;
	}
};

class freeValue {
private:
	int x, y, z;
public:
	freeValue() {
		x = 0;
		y = 0;
		z = 0;
	}
	
	freeValue(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	int GetX() {
		return x;
	}
	void SetX(int x) {
		this->x = x;
	}
	int GetY() {
		return y;
	}
	void SetY(int y) {
		this->y = y;
	}
	int GetZ() {
		return z;
	}
	void SetZ(int z) {
		this->z = z;
	}


	~freeValue() {

	}
};

class KR : private freeValue {
private:
	int x, y, z;
public:
	KR() {
		x = 0;
		y = 0;
		z = 0;
	}

	KR(freeValue &spare) {
		x = spare.GetX();
		y = spare.GetY();
		z = spare.GetZ();
	}

	double math(freeValue &spare) {
		double D;D = pow(y, 2) - 4 * x*z;
		double x1, x2;
		x1 = (y + sqrt(D)) / 2 * x;
		x2 = (y - sqrt(D)) / 2 * x;
		cout << x1 << "\t" << x2;
		//cout<<spare.GetX();
		return x1, x2;
	}

	int GetX() {
		return x;
	}
	void SetX(int x) {
		this->x = x;
	}
	int GetY() {
		return y;
	}
	void SetY(int y) {
		this->y = y;
	}
	int GetZ() {
		return z;
	}
	void SetZ(int z) {
		this->z = z;
	}
 	 ~KR() {

	}


};

int main(int argc, char** argv) {
	
	book Algebra;
	type tp;
	Algebra.getdata();
	Algebra.putdata();

	tp.getdata();
	tp.putdata();
	
	freeValue fv(1,3,-4);
	KR kr(fv);
	kr.math(fv);
	system("pause");
	return 0;
}