// Insertion Sort
// Best: O(n) Average: O(n^2) Worst: O(n^2)
#include <iostream>
using namespace std;


void sort(int* array,int size){
	//
	for (int j=1; j < size;) {
		// The number you are putting in the correct position.
		int key = array[j];
		// Insert array[j] into the sorted sequence A[1 ... j-1].
		int i = j-1;
		while (i > 0 and array[i] > key){
			array[i+1] = array[i];
			i--;
		}
		array[i+1] = key;
	}
}

/*
void insert(int* array,int pos,int value){
	int i = pos-1;
	while(i >=0 and array[i] > value){
		array[i +1] = array[i];
		i--;
	}
	array[i+1] = value;
}

void sort(int* pointer, int size){
	for (int i=0; i<size; i++) {
		insert(pointer, i, pointer[i]);
	}
}
*/



class my_array{
private:
	int numbers[8];
	int size;
	int *ptr_numbers;
public:
	my_array();
	~my_array();
	void set_numbers(int a,int b,int c,int d,int e,int f,int g, int h);
	int* get_numbers();
	int get_size();
	void print();
};

// Constructor
my_array::my_array(){
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	numbers[4] = 0;
	numbers[5] = 0;
	numbers[6] = 0;
	numbers[7] = 0;
	
	size = 7;
}

// Destructor
my_array::~my_array(){
	cout << "The class was deleted\n";
}

// Set the numbers of the array
void my_array::set_numbers(int a,int b,int c,int d,int e,int f,int g, int h){
	numbers[0] = a;
	numbers[1] = b;
	numbers[2] = c;
	numbers[3] = d;
	numbers[4] = e;
	numbers[5] = f;
	numbers[6] = g;
	numbers[7] = h;
}

// Return a pointer to the numbers array
int* my_array::get_numbers(){
	return &numbers[0];
}

// Return the size of the numbers in the array
int my_array::get_size(){
	return size;
}

// Print the numbers
void my_array::print(){
	for (int i=0; i < size; i++){
		cout << numbers[i] << " ";
	}
	cout << "\n";
}

void pointer_test(int* pointer, int size){
	cout << *pointer << endl;
	cout << size << endl;
	
	*pointer = 4;
}

int main (int argc, char * const argv[]) {
	my_array eight_numbers;
	int* pointer = eight_numbers.get_numbers();
	
	eight_numbers.print();	
	eight_numbers.set_numbers(1, 30, 6, 74, 39, 16, 58, 9);
	eight_numbers.print();
	sort(pointer, eight_numbers.get_size());
	eight_numbers.print();
	cout << "\n";
	
	return 0;
}
