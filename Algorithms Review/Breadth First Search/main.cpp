#include <iostream>
#include <queue>
#include "node.h"
using namespace std;

queue<int> numbers;

void BFS(node new_node){	
	cout << new_node.value() << endl;
	
	if (new_node.left() != NULL) {
		BFS(*new_node.left());
	}
	if (new_node.right() != NULL) {
		BFS(*new_node.right());
	}
		
}

/* The layout of the tree
		 1
	2		  3
  4   5     6   7
 
*/


int main (int argc, char * const argv[]) {
	node root(1);
	node left1(2);
	node right1(3);
	root.set_left(left1);
	root.set_right(right1);
	
	node left2(4);
	node left3(5);
	left1.set_left(left2);
	left1.set_right(left3);
	
	node right2(6);
	node right3(7);
	right1.set_left(right2);
	right1.set_right(right3);

	
	BFS(root);
	/*
	 cout << &left1 << endl;
	 cout << root.left_child << endl;
	 root.left_child = &left1;
	 cout << root.left_child << endl;
		cout << &(root.left());
		cout << (*root.left()).value() << endl;
		cout << (root.left())->value() << endl;
    */
	 
	return 0;
}
