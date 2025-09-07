#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;

void printArray_std(array <array <int, kolom>, baris> &nilaiArray) {  //printArray_std (int &nilaiArray)
    for (array <int, kolom> vectorBaris: nilaiArray) { // for (int vectorBaris : nilaiArray)
        cout << "[ ";
        for (int nilaiKolom : vectorBaris) {
            cout << nilaiKolom << " ";
        }
        cout << "]" << endl;
    }
}

void printArray(int *ptrArray, int baris, int kolom) {
    int index = 0;
    cout << "tampilan array multidimensi" << endl;
    for (int i = 0; i < baris; i++) {
            cout << "[";
        for (int j = 0; j < kolom; j++) {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main() {
    //deklarasi array dengan standard library
    array < array <int, kolom>, baris> nilaiMD = {1,2,3,4,5,6};

    cout << "Array multidimensi standard library" << endl;
    printArray_std(nilaiMD);

    //array multidimensi
    //array[baris][kolom]
    int arrayMD[2][2] = {1,2,3,4};

    /*cout << arrayMD[0][0] << " ";
    cout << arrayMD[0][1] << " "<< endl;

    cout << arrayMD[1][0] << " ";
    cout << arrayMD[1][1] << " ";*/

    cout << endl;
    printArray(*arrayMD, 2, 2);
    return 0;
}

