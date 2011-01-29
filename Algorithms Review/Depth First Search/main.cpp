#include <iostream>
using namespace std;

enum colors {white, gray, black};

class node{
	public:
		int value;
		colors color;
		node *left;
		node *right;

		node();
		node(int);
};

node::node(){
	value = 0;
	color = white;
	left = NULL;
	right = NULL;
}
node::node(int number){
	value = number;
	color = white;
	left = NULL;
	right = NULL;
}

/*
		    1
     2			  8
  3	   6	   9	12
 4 5		 10	11

*/

int main (int argc, char * const argv[]) {
	node *ptr;
	node one(1);
	node two(2);
	one.left = &two;
	node eight(8);
	one.right = &eight;
	node three(3);
	two.left = &three;
	node six(6);
	two.right = &six;
	node four(4);
	three.left = &four;
	node five(5);
	three.right = &five;
	node nine(9);
	eight.left = &nine;
	node twelve(12);
	eight.right = &twelve;
	node ten(10);
	nine.left = &ten;
	node eleven(11);
	eight.right = &eleven;
	

	ptr = one.left;
	
	
	cout << one.value << " " << one.color << endl;
	cout << two.value << " " << (*ptr).value << endl;
	
    return 0;
}
