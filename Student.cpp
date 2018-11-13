#include "Student.h"

Student::Student() {
	cout << "Name : "; cin >> name;
	cout << "Surname : "; cin >> surname;
	cout << "Value Zalik book : "; cin >> num;
	cout << "Type student,   PL - 0 / D - 1  : "; cin >> tape;
}
Student :: Student(string name, string surname,string num, bool tape) {
	this->name = name;
	this->surname = surname;
	this->num = num;
	this->tape = tape;
}

Facultet::Grupa::Grupa() {
	cout << "\nName group : "; cin >> nameGroup;
	cout << "Specickal group : "; cin >> Spec;
	listS = new Student;
}
Facultet::Grupa::Grupa(string nameGroup, string Spec, Student *listS) {
	this->nameGroup = nameGroup;
	this->Spec = Spec;
	this->listS = listS;
}

Facultet::Grupa::~Grupa() { delete listS; }

Facultet::Facultet() {
	cout << "Name Specickal : "; cin >> nameFac;
	listG = new Grupa;
}
Facultet::Facultet(string nameFac, Facultet::Grupa *listG) {
	listG = new Grupa;
	this->nameFac = nameFac;
	this->listG = listG;
}

ostream &operator <<(ostream &os, const Facultet &other) {
	os << "Name Specickal : " << other.nameFac<< "List group : "<< other.listG << "\nName Group : " 
		<< other.listG->nameGroup << "\nSpecickal group : " << other.listG->Spec<< "  List Srudent  : "
		<< other.listG->listS << "Name : " << other.listG->listS->name << "\nSurName : " 
		<< other.listG->listS->surname << "\nValue Zalik book : " << other.listG->listS->num;
	if (other.listG->listS->tape == 0) {
		os << "\nType student - Platnick\n";
	}
	else {
		os << "\nType student - Derjavnick\n";
	}

		
	return os;
}
ostream &operator <<(ostream &os, const Facultet::Grupa &other) {
	os << "\nName Group : " << other.nameGroup << "\nSpecickal group : " << other.Spec 
		<<"  List Srudent  : "<< other.listS;
	return os;
}
ostream &operator <<(ostream &os, const Student &other) {
	os << "Name : " << other.name << "\nSurName : " << other.surname << "\nValue Zalik book : " << other.num;
	if (other.tape == 0) {
		os<<"\nType student - Platnick\n";
	}
	else {
		os << "\nType student - Derjavnick\n";
	}
	return os;
}

int main(int argc, char**argv) {
	 
	//Student human1("Ivan", "Franko", "A45DL32S", 0);
	//Student human2;
	//Student human3;

	//cout << endl << human1 <<endl<< human2<<endl << human3<<endl;
	Facultet f[2] ;
	for (int i = 0; i < n; i++) {
		f[i];
	}
	system("pause");
	return 0;
}