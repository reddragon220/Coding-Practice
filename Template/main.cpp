#include <iostream>
#include <iomanip>
using namespace std;

template<class T>
T square(T number)
{
	return number * number;
}

int main (int argc, char * const argv[]) {
	int iValue;
	double dValue;
	
	cout << setprecision(5);
	cout << "Enter an integer and a floating-point value: ";
	cin >> iValue >> dValue;
	cout << "Here are their squares: ";
	cout << square(iValue) << " and " << square(dValue) << endl;
    
	return 0;
}
