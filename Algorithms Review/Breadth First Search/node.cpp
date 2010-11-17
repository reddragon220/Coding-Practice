/*
 *  node.cpp
 *  Breadth First Search
 *
 *  Created by Alexander on 10/9/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "node.h"
#include <iostream>

node::node(){
	node_value = 0;
	left_child = NULL;
	right_child = NULL;
}

node::node(int value){
	node_value = value;
	left_child = NULL;
	right_child = NULL;
}

int node::value(){
	return node_value;
}

void node::set_value(int x){
	node_value = x;
}

node* node::left(){
	return left_child;
}
node* node::right(){
	return right_child;
}

void node::set_left(node &x){
	left_child = &x;
}
void node::set_right(node &x){
	right_child = &x;
}