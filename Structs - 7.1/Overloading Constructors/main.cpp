#include <iostream>
#include <iomanip>
using namespace std;

#include "sale.h"

int main (int argc, char * const argv[]) {
	Sale cashier1(0.06, 24.95);
	
	Sale cashier2(24.95);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "With a 0.06 sales tax rate, the total\n";
	cout << "of the $25.95 sale in $";
	cout << cashier1.getTotal() << endl;
	cout << "On a tax-expempt purchase, the total\n";
	cout << "of the $24.95 sale is, of course, $";
	cout << cashier2.getTotal() << endl;
	return 0;
}
