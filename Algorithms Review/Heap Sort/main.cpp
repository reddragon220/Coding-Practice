// Heap Sort
// Worst Case: O(n lg n) Best Case: O(n lg n)
// 
// Structure:
// every element A[i] has it's left and right child at A[2i] and A[2i+1]
// parent is i/2
#include <iostream>
#include <vector>
using namespace std;

void sort(vector <int> &array);
//void buildHeap(vector <int> &array);
//void heapify(vector <int> &array, int index, int max);
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


// start at the last node and call heapify on each node to make sure everything
// is a heap as the loop invariant moves towards the front.
void sort(vector <int> &array){
	for (int i = array.size(); i >= 0; i--) {
			swap(array[0], array[i]);
			heapify(array, i);
	}
	
}

// Max heapify - take a node and make sure that it's larger than all of its children.
// if you encounter something larger swap the nodes. Start at the index and go forth until you look at all of the leaves.
void heapify(vector <int> &array, int index){
	int left = 2*index;
	int right = 2*index+1;
	
	int largest = index;
	
	if (left <= array.size() && array[left] > array[largest]){
		largest = left;
	}
	if (right <= array.size() && array[right] > array[largest]){
		largest = right;
	}
	
	if (largest != index){
		int temp = array[index];
		array[index] = array[largest];
		array[largest] = temp;
		
		heapify(array, largest);
	}

	
}