#include <iostream>
#include <cmath>
using namespace std;

class circle{
	private:
		double radius;
	public:
		void setRadius(double r){
			radius = r;
		}
		double getArea(){
			return(3.14*pow(radius,2));
		}
};

int main(){
	circle sphere1, sphere2;
	
	sphere1.setRadius(1);
	sphere2.setRadius(2.5);
	
	cout << "The area of sphere1 is " << sphere1.getArea() << endl;
	cout << "The area of sphere2 is " << sphere2.getArea() << endl;
}