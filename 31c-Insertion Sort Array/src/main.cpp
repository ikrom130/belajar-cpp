#include <iostream>
#include <utility>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void insertionsort(int array[], int length);

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

    insertionsort(nilai, size);

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}

void insertionsort(int array[], int length){
	for(int i=1; i<length; i++){
		int temp = array[i];
		int j = i-1;
		while(j >= 0 && array[j] > temp){
			array[j+1] = array[j];
			j--;
		}
	    array[j+1] = temp;
	}
}
