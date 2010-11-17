#include <iostream>
#include "rectangle.h"
using namespace std;


int main (int argc, char * const argv[]) {
	Rectangle box;
	double boxLength, boxWidth;
	
	cout << "What is the length?\n";
	cin >> boxLength;
	cout << "What is the width\n";
	cin >> boxWidth;
	
	if (!box.setLength(boxLength))
		cout << "Invalid box length endered.\n";
	else if (!box.setWidth(boxWidth))
		cout << "Invalid box width entered.\n";
	else {
		cout << "\nHere is the rectangle's data:\n";
		cout << "Length: " << box.getLength() << endl;
		cout << "Width: " << box.getWidth() << endl;
		cout << "Area: " << box.getArea() << endl;
	}
	return 0;
}
