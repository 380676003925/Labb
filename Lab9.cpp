#include <iostream>
#include <cstring>
#include <Windows.h>
#include <string>
using namespace std;
class myException {
public:
	string str;
	myException(){	str = "\n";}
	myException(char *other) { str = *other; }
	myException(int i) {
		char temp[1] = "";
		str = "Index " + to_string(i + 1) + " out of array";
	}
 };
int main(int argc, char** argv) {
	
	int mass[100];
	try {
		for (int i = 0; i < 101; i++) {
			if (i >= 100)  throw myException(i);
			mass[i] = i * 10;
			
				mass[i] = i * 10;
		}
		for (int i = 0; i < 101; i++) {
			if (i >= 100) throw myException(i);
			int temp = mass[i];
			cout << "Element : " << i << " it is " << temp << endl;
		}
	}
	catch (myException e) {
		cout << e.str << endl;
	}
	system("pause");
	return 0;
}