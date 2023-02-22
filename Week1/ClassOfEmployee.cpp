#include <iostream>
using namespace std;

class employee{
	string name;
	int year;
	string address;
public:
	employee(string _name,int _year,string _address){
		name = _name;
		year = _year;
		address = _address;
	}
	void print(){
		cout << name << " " << year << " " << address << endl;
	}
};

int main()
{
	string s;
	getline(cin, s);
	int name;
	cin >> name;
	cin.ignore();
	string address;
	getline(cin, address);
	employee a(s, name, address);
	a.print();
}
