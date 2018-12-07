#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main(int argc, char**argv) {

	vector<char> v;
	char ch;
	bool over = false;
	int x = 33;
	char *surname;
	
	do {
		ch = _getch();
		x = static_cast<int>(ch);
		if (ch == 32) break;
		 v.push_back(ch);
	} while (ch != 32);

	for(int i = 0; i < v.size();i++){
		cout<< v[i]<<" ";
	}
	
	//x = static_cast<int>(ch);
	//cout << x ;
	system("pause");
	return 0;
}