#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person {
private:
public:
	string name, surname, P, MN, data;
	long phone;
	int year;
	Person() {
		cout << "Name - ";			cin >> name;
		cout << "Surname - ";		cin >> surname;
		cout << "P - ";				cin >> P;
		cout << "Data - ";			cin >> data;
		cout << " Contry study - "; cin >> MN;
		cout << "Number phone - ";	cin >> phone;
		cout << "year - ";			cin >> year;
	}
	void Point() {
		cout <<name		<<endl;	
		cout <<surname	<<endl;	
		cout <<P		<<endl;		
		cout <<data		<<endl;	
		cout  <<MN		<<endl;		
		cout << phone	<<endl;	
		cout  <<year	<<endl;	
	}
};
ostream &operator <<(ostream &ofs, const Person &other) {
	ofs << other.name		<<
	  "Surname -" << other.surname		<<
	  "P - " << other.P			<<
	  "Data -" << other.data		<<
	  " Contry study -" << other.MN			<<
	  "Number phone - " << other.phone		<<
	  "year - " << other.year		;
	return ofs;
}
int main(int argc, char **argv) {
	
	ofstream ofs;
	string text = "myfile.txt";
	string name, surname, P,MN,data;
	long phone;
	int year;
	//Person person;
	/*
	ofs.open(text,ofstream::out );
	if (!ofs.is_open()) {
		cout << "NOT FILE" << endl;
	}
	else {
		cout << "--------------"<<endl;
		cout << "Name - ";			cin >> name;	 ofs << name << endl;
		cout << "Surname - ";		cin >> surname;	 ofs << surname << endl;
		cout << "P - ";				cin >> P;		 ofs << P << endl;
		cout << "Data - ";			cin >> data;	 ofs << data << endl;
		cout << " Contry study - "; cin >> MN;		 ofs << MN << endl;
		cout << "Number phone - ";	cin >> phone;	 ofs << phone << endl;
		cout << "year - ";			cin >> year;	 ofs << year << endl;
	}
	ofs.close();
	ifstream ifs;
	ifs.open(text);
	string ch;
	if (!ifs.is_open()) {
		cout << "NOT FILE" << endl;
	}
	else {
		while (!ifs.eof()) {
			ifs >> ch;
			cout << ch << endl;
		}
	}
	ifs.close();
	*/
	cout << "++++++++++++++++++++\n";
	/*
	ofstream of(text,ofstream::out | ofstream::app);
	
	if (!of.is_open()) {
		cout << "NOT FILE" << endl;
	}
	else {
		of.write((char*)&person, sizeof(Person));
		cout << "FILE NOT EMPTY";
	}
	of.close();
	*/
	ifstream ifs;
	ifs.open(text);
	//string str;
	if (!ifs.is_open()) {
		cout << "NOT FILE" << endl;
	}
	else {
		Person person;
		ofstream ofs(text);
		ofs.write((char*)&person, sizeof(Person));
		ofs.close();
		while (ifs.read((char*)&person, sizeof(Person))) {
			person.Point();
		}
	}
	ifs.close();
	
	//of.close();

	system("pause");
	return 0;
}