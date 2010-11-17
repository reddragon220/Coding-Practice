#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) {
	int x = 25;
	int *ptr;
	
	ptr = &x;
	
	cout << "The value of x is " << x << endl;
	cout << "The address of x is " << ptr << endl;
	cout << "The value the pointer points to is " << *ptr << endl;
	*ptr = 50;
	cout << "The new value the pointer points to is " << x << endl;
	
    return 0;
}
