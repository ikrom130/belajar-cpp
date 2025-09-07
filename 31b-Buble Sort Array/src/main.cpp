#include <iostream>

using namespace std;

void buble_sort(int array[], int length);

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

    buble_sort(nilai, size);

    for(int l=0; l<size; l++){
        cout << nilai[l];
        if(l!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}

void buble_sort(int array[], int length){
    for(int i = 0; i < length-1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
