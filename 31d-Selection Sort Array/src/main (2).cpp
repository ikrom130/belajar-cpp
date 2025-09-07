#include <iostream>
#include <utility>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void selectionsort(int array[], int length);

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

    selectionsort(nilai, size);

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}

void selectionsort(int array[], int length){
	for(int i=0; i<length-1; i++){
		int min = i;
		for(int j=i+1; j<length; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}
