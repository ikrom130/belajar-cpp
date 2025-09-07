#include <iostream>
#include <utility>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void merge_sort(int array[], int length);
void merge_sort_recursion(int array[], int l, int r);
void merge_sorted_arrays(int array[], int l, int m, int r);

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

    merge_sort(nilai, size);

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}

void merge_sort(int array[], int length){
	merge_sort_recursion(array, 0, length - 1);
}

void merge_sort_recursion(int array[], int l, int r){
	if(l < r){
		int m = l + (r - l) / 2;
		
		merge_sort_recursion(array, l, m);
		merge_sort_recursion(array, m + 1, r);

		merge_sorted_arrays(array, l, m, r);
	}	
}

void merge_sorted_arrays(int array[], int l, int m, int r){
	int left_length = m - l + 1;
	int right_length = r - m;

	int temp_left[left_length];
	int temp_right[right_length];

	int i, j, k;

	for(int i = 0; i < left_length; i++){
		temp_left[i] = array[l + i];
	}

	for(int i = 0; i < right_length; i++){
		temp_right[i] = array[m + 1 + i];
	}
	
	for(i = 0, j = 0, k = l; k <= r; k++){
		if((i < left_length) && (j >= right_length || temp_left[i] <= temp_right[j])){
			array[k] = temp_left[i];
			i++;
		}
		else {
			array[k] = temp_right[j];
			j++;
		}
	}
}
