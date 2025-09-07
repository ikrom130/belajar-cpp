#include <iostream>
#include <utility>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void quicksort(int array[], int length);
void quicksort_recursion(int arrray[], int low, int high);
int partition(int array[], int low, int high);

int main (){

    int nilai[] = {10,11,23,44,56,15,7,12,9,45,2,45,1};
    int size = sizeof(nilai)/sizeof(nilai[0]);
    // cout << size << endl;

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;

    quicksort(nilai, size);

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}

void quicksort(int array[], int length){
	srand(time(NULL));

	quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high){
	if(low < high){
		int pivot_index = partition(array, low, high); 

		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

int partition(int array[], int low, int high){
	int pivot_index = low + (rand() % (high - low));
	if(pivot_index != high){
		swap(array[pivot_index], array[high]);
	}

	int pivot_value = array[high];

	int i = low;

	for(int j = low; j < high; j++){
		if(array[j] <= pivot_value){
			swap(array[i], array[j]);
			i++;
		}
	}
	swap(array[i], array[high]);

	return i;
}
