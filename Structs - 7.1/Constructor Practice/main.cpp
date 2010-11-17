#include <iostream>
#include <string>
using namespace std;

struct PopInfo{
	string name;
	long population;
	
	// Constructor with 2 parameters and default values
	PopInfo(string n = "New City ", long p=0){
		name = n;
		population = p;
	}
};

void CityInfo(PopInfo &city){
	cout << city.name << " " << city.population << endl;
}

int main (int argc, char * const argv[]) {
	PopInfo city1("Aurora ", 1621184);
	PopInfo city2("Naperville", 137894);
	PopInfo city3;
	
	cout << "Here is the city data:\n";
	CityInfo(city1);
	CityInfo(city2);
	CityInfo(city3);
}
