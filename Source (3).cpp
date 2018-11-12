#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class Int {
	
private:
	int x, y;
public:

	Int operator +(const Int &other) {
		Int power;

		power.x = this->x + other.x;
		power.y = this->y + other.y;

		return power;
	}
	Int() {
		x = 0;
		y = 0;
	}
	int Input() {

		cout << "Enter value 1 : ";
		cin >> x;
		cout << "Enter value 2 : ";
		cin >> y;
		return x,y;
	}
	void Print() {
		cout << endl << "You value 1 : " << x << endl << "You value 2 : " << y;
	}
};

class Kasa {
private:
	double Price;
	unsigned int number;
public:
	Kasa() {
		Price = 0;
		number = 0;
	}
	void PlayingCar() {
		number++;
		Price += 0.5;
	}
	void nopayCar() {
		number++;
	}

	void display() {
		cout << " Number : " << number << "\t" << "Price : " << Price << endl;
	}

};

class time {
private:
	int x, y, z;
	unsigned int first,second;
public:
	void minutes() {
		first *= 24;
		first += second;
	}
	time() {
		x = 0;
		y = 0;
		z = 0;
	}
	time(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void point() {
		cout << x << ":" << y << ":" << z << endl;
	}
	time operator +(const time &other) {
		time temporary;
		temporary.x = this->x + other.x;
		temporary.y = this->y + other.y;
		temporary.z = this->z + other.z;
		return temporary;
	}
};

int main(int argc, char**argv) {
	char ch;
	int x;
	Kasa k;

	Int a,b,c;
	a.Input();

	b.Input();
	
	c = a + b;
	c.Print();
	
	bool over = false;
	cout << endl;
	do{	
		ch = _getch();
		if (ch == '1') {
			k.PlayingCar();
		}
		if (ch == '2') {
			k.nopayCar();
		}
		x = static_cast<int>(ch);
		if (ch == 27) over = true;

	} while (!over);
	k.display();
	
	time t1(10,4,6);
	time t2(5, 7, 3);
	time t3;
	t3 = t1 + t2;
	cout << endl;
	 system("pause");
	return 0;
}