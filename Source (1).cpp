#include <iostream>
using namespace std;
class prematechnik {
private:
	int width;
	int height;
	double S;
public:
	prematechnik() {
		width = 0;
		height = 0;
	}
	prematechnik(int x, int y) {
		width = x;
		height = y;
	}
	void SetWidth(int  width) {
		this->width = width;
	}
	int GetWidth() {
		return width;
	}
	void SetHeight(int height) {
		this->height = height;
	}
	void Input() {
		cout << "Enter Width : ";
		cin >> width;
		cout << "Enter Height : ";
		cin >> height;
	}
	void Print() {
		cout << "Widht : " << width << "\tHeight : " << height << endl;
	}
	bool operator ==(const prematechnik &other) {
		return this->S == other.S;
	}
	bool operator !=(const prematechnik &other) {
		return !(this->S == other.S);
	}
	double comparison(const prematechnik& other) {
		double more;
		if (this->width*this->height > other.width *other.height) {
			cout << this->width*this->height << " > " << other.width *other.height;
			return more = this->S;
		}
		else {
			cout << this->width*this->height << " < " << other.width *other.height;
			return more = other.S;
		}
	}
		
	~prematechnik() {

	}
};
int main(int argc, char* cahrv[]) {
	
	prematechnik p3,p1(20,3),p2(4,6);
	
	p1.comparison(p2);
	cout << endl;
	system("pause");
	return 0;
}