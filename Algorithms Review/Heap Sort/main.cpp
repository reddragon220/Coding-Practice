// Heap Sort
// Worst Case: O(n lg n) Best Case: O(n lg n)
// 
// Structure:
// every element A[i] has it's left and right child at A[2i] and A[2i+1]
// parent is i/2
//
// The initial call to buildHeap takes O(n) and then the n calls to heapify cost O(logn) each
#include <iostream>
#include <vector>
#define DEBUG
using namespace std;

void sort(vector <int> &array);
void buildHeap(vector <int> &array);
void heapify(vector <int> &array, int index);

int main (int argc, char * const argv[]) {
	vector <int> numbers;
	numbers.push_back(5);
	numbers.push_back(3);
	numbers.push_back(16);
	numbers.push_back(2);
	numbers.push_back(10);
	numbers.push_back(14);
	
	for (int i=0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	
	sort(numbers);
	
	for (int i=0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	
    return 0;
}

// We first build a heap in place in the array, then we begin sorting it.
// Start at the last node and call heapify on each node to make sure everything
// is a heap as the loop invariant moves towards the front.
void sort(vector <int> &array){
	buildHeap(array);
	
	#ifdef DEBUG
	for (int i=0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	#endif
	
	for (int i = array.size()-1; i >= 0; i--) {
			swap(array[0], array[i]);		
			heapify(array, i);
		
			#ifdef DEBUG
			for (int i=0; i < array.size(); i++) {
				cout << array[i] << " ";
			}
			cout << endl;
			#endif DEBUG

	}
	
}

// Start at the last node that can possibly have children which could violate the heap property and fix working bottom up until it reaches the root at the top
// Simply put - heapify each non-leaf node
void buildHeap(vector <int> &array){
	for (int i = (array.size())/2; i >= 0; i--){
		heapify(array, i);
	}
}

// Max heapify - take a node and make sure that it's larger than all of its children.
// if you encounter something larger swap the nodes. Start at the index and go forth until you look at all of the leaves.
void heapify(vector <int> &array, int index){
	int left = 2*index;
	int right = 2*index+1;
	
	int largest = index;
	
	if (left <= array.size()-1 && array[left] > array[largest]){
		largest = left;
	}
	if (right <= array.size()-1 && array[right] > array[largest]){
		largest = right;
	}
	
	if (largest != index){
		swap(array[index], array[largest]);
		heapify(array, largest);
	}
}