#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
template<typename T1>
T1 SA(int x, int* mass) {
	T1 S = 0;
	for (int i = 0; i < x; i++) {
		S += mass[i];
	}
	S /= x;
	cout << endl << endl;
	return S;
}
template<typename T1>
T1 amax(int *mass, int size) {
	T1 max;
	max = (T1)*mass;
	for (int i = 0; i < size; i++) {
		if (max < mass[i]) {
			max = mass[i];
			cout << mass[i] << endl;
		}
	}
	return max;
}
*/
//template<typename T1>
class testclass {
public:
	testclass() {
		cout << "Size mass - "; cin >> size;
	}
	void writemass() {
		
		for (int i = 0; i < size; i++) {
			cout << "mass - ";
			cin >> mass[i];
		}
	}
	void showmass() {
		for (int i = 0; i < size; i++) {
			cout << mass[i] << endl;
		}
	}
	int SA() {
		for (int i = 0; i < size; i++) {
			S += mass[i];
		}
		S /= size;
		cout << endl << endl;
		return S;
	}
	int amax() {
		max = *mass;
		for (int i = 0; i < size; i++) {
			if (max < mass[i]) {
				max = mass[i];
				cout << mass[i] << endl;
			}
		}
		return max;
	}

private:
	int max;
	int S = 0;
	int size;
	int *mass;
};

int main(int argc, char **argv) {
	srand(time_t(NULL));
	int  y= 5;
	int array[5];
	/*
	for (int i = 0; i < y; i++) {
		array[i] = rand() % 100 + 1;
		cout << array[i] << endl;
	}*/
	//cout << SA<double>(y, array);
	//cout << endl << amax<int>(array, y);
	testclass d;
	d.writemass();
	d.amax();
	cout << endl;
	d.SA();

	cout << endl;
	system("pause");
	return 0;
}