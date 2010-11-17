// Merge Sort
// Best O(nlogn) Worst O(n^2)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &numbers, int low, int mid, int high){
	vector <int> left;
	
	for (int i=low; i < mid; i++){
		left.push_back(numbers[i]);
	}	
	vector <int> right;
	for (int i=mid; i < high; i++){
		right.push_back(numbers[i]);
	}
	#ifdef DEBUG
	cout << "Low: " << low << " Mid: " << mid << " High: " << high << endl;
	cout << "Left side:  ";
	for (int i=0; i < left.size(); i++) {
		cout << left[i] << " ";
	}
	cout << endl;
	cout << "Right side: ";
	for (int i=0; i < right.size(); i++) {
		cout << right[i] << " ";
	}
	cout << endl;
	#endif
	
	int i=0; // left index
	int j=0; // right index
	for (int k=low; k < high; k++) {
		if (j == right.size()){
			#ifdef DEBUG
			cout << "Right side is done putting in " << left[i] << endl;
			#endif
			numbers[k] = left[i];
			i++;
		}
		else if (i == left.size()){
			#ifdef DEBUG
			cout << "Left side is done putting in " << right[i] << endl;
			#endif
			numbers[k] = right[j];
			j++;
		}
		else if (left[i] <= right[j]) {
			numbers[k] = left[i];
			#ifdef DEBUG
			cout << "Comparing " << left[i] << " and " << right[j] << endl;
			cout << left[i] << " is lower" << endl;
			#endif
			i++;
		}
		else if (left[i] > right[j]){
			numbers[k] = right[j];
			#ifdef DEBUG
			cout << "Comparing " << left[i] << " and " << right[j] << endl;
			cout << right[j] << " is lower" << endl;
			#endif
			j++;
		}		
	}
	#ifdef DEBUG
	for (int i = 0; i < numbers.size(); i++){
		cout << numbers[i] << " ";
	}
	cout << endl << "---------------" << endl;
	#endif
}

void mergesort(vector <int> &numbers, int low, int high){
	if (low < high){
		int mid = (low+high)/2;
		mergesort(numbers, low, mid);
		mergesort(numbers, mid+1, high);
		merge(numbers, low, mid, high);
	}
}

int main (int argc, char * const argv[]) {
    vector <int> numbers;
	numbers.push_back(5);
	numbers.push_back(2);
	numbers.push_back(4);
	numbers.push_back(7);
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(2);
	numbers.push_back(6);	
	
	cout << "Original" << endl;
	for (int i=0; i < numbers.size(); i++){
		cout << numbers[i] << " ";
	}
	cout << endl;

	mergesort(numbers, 0, numbers.size());
	cout << "Sorted" << endl;
	for (int i=0; i < numbers.size(); i++){
		cout << numbers[i] << " ";
	}
	
    return 0;
}
