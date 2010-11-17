// Quicksort
// Worst: O(n^2) Average: O(n log n)
#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector <int> &array,int left,int right);
int partition(vector <int> &array,int left,int right);

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
	
	quicksort(numbers, 0, numbers.size()-1	);
	
	for (int i=0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	
	return 0;
}


void quicksort(vector <int> &array, int left, int right){
	if (left < right){
		int pivot = partition(array, left, right);
		quicksort(array, left, pivot-1);
		quicksort(array, pivot+1, right);
	}
}


int partition(vector <int> &array,int left,int right){
	int pivot = array[left];
	
	while (true)
	{
		while (array[left] < pivot){
			left++;	
		}
		
		while (array[right] > pivot){
			right--;
		}
		
		if (left < right)
		{
			swap(array[left], array[right]);
		}
		else
		{
			return right;
		}
	}
	
}