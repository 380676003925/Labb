#include <iostream>
#include <string>
#define n 3
using namespace std;
class Student {
private:
public:
	string name;
	string surname;
	string num;
	bool tape;
	Student();
	Student(string name, string surname, string num, bool tape);

};
class Facultet {

public:
	string nameFac;
	
	class Grupa {
	public:
		string nameGroup;
		string Spec;
		Student *listS;
		Grupa();
		Grupa(string nameGroup, string Spec, Student *listS);
		~Grupa();
	};
	Grupa *listG;
	Facultet();

	Facultet(string nameFac, Facultet::Grupa *listG);
};

ostream &operator <<(ostream &os, const Facultet &other);
ostream &operator <<(ostream &os, const Facultet::Grupa &other);
ostream &operator <<(ostream &os, const Student &other);
