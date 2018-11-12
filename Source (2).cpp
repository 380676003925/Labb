#include <iostream>
using namespace std;

class Vegatables {
private:
	char *color;
	int price;
public:
	Vegatables() {
		color = '\0';
		price = 0;
	}

	Vegatables(char* color, int price) {
		this->color = color;
		this->price = price;
	}
	Vegatables(const Vegatables& other){
		this->color = other.color;
		this->price = other.price;
	}
	void SetColor(char* color) {
		this->color = color;
	}
	char *GetColor() {
		return color;
	}
	void SetPrice(int price) {
		this->price = price;
	}
	int GetPrice() {
		return price;
	}
	void Print() {
		cout << "Vegatables \n Color : " << color << "\t Price : " << price;
	}
	void Input() {
		cout << "Enter Color : "; cin >> color;
		cout << "Enter Price : "; cin >> price;
	}
};

int main() {
	char temporary[10];
	//temporary = new char[10];
	cin >> temporary;
	Vegatables broccoli(temporary, 80);
	broccoli.Print();
	cout << endl;
	system("pause");

	return 0;
}