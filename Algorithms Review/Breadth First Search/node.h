/*
 *  node.h
 *  Breadth First Search
 *
 *  Created by Alexander on 10/9/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

class node{
	private:
	public:
		int node_value;
		node *left_child;
		node *right_child;
	
		node();
		node(int value);
		int value();
		void set_value(int x);
		node* left();
		node* right();
		void set_left(node &x);
		void set_right(node &x);
};