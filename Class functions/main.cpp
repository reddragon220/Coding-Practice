#include <iostream>
using namespace std;

class testing{
	private:
		string name;
		int number;
	public:
		testing();
		void set_name(string n);
		void set_nubmer(int n);
		string getname();
		int getnum();
	
};

class inherited_class : public testing {
	private:
		string last_name;
	public:
		inherited_class();
		void set_lastname(string n);
		string get_lastname();
};

inherited_class::inherited_class(){
	last_name = "Katz";
}

void inherited_class::set_lastname(string n){
	last_name = n;
}

string inherited_class::get_lastname(){
	return last_name;
}

testing::testing(){
	name = "alexander";
	number = 1;
}

void testing::set_name(string n){
	name = n;
}

void testing::set_nubmer(int n){
	number = n;
}

string testing::getname(){
	return name;
}

int testing::getnum(){
	return number;
}

int main (int argc, char * const argv[]) {
	testing my_object;
	inherited_class my_object2;
	
	cout << my_object.getnum() << " " << my_object.getname() << "\n";
	cout << my_object2.getnum() << " " << my_object2.getname() << " " << my_object2.get_lastname();
}
