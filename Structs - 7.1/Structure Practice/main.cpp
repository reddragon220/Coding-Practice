#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll
{
	int empNumber;	// Employee Number
	string name;	// Employee Name
	double hours,	// Hours worked
		   payrate,	// Hourly pay rate
		   grossPay;// Gross pay
};

int main (int argc, char * const argv[]) {
	PayRoll employee;
	
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;
	cout << "Enter the employee's name: ";
	cin.ignore();
	getline(cin, employee.name);
	cout << "How many hours did the employee work? ";
	cin >> employee.hours;
	cout << "What is the employee's hourly pay rate? ";
	cin >> employee.payrate;
	
	employee.grossPay = employee.hours * employee.payrate;
	
	cout << employee.empNumber << " " << employee.name << "'s gross Pay is $" << employee.grossPay << endl;
	
	
    return 0;
}
