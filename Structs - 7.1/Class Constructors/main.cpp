#include <iostream>
using namespace std;

class Demo{
	private:
		int number;
	public:
		// Constructor
		// Demo();
		Demo(){
			cout << "Now the default constructor is running.\n";
			number = 2;
		}
		void setnum(int num){
			number = num;
		}
		void getnum(){
			cout << number << endl;
		}
};

/*
Demo::Demo(){
		cout << "Now the default constructor is running.\n";
}
 */

int main (int argc, char * const argv[]) {
	cout << "This is displayed before the object is created.\n";
	Demo demoObj;
	cout << "This is displayed after the object is created.\n";
	demoObj.getnum();
    return 0;
}