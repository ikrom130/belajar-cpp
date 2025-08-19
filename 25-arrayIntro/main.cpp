#include <iostream>

using namespace std;

int main() {
    // membuat array
    int nilai[5]; //inisisasi
    nilai[0] = 23; // mendefinisikan array
    nilai[1] = 24;
    nilai[2] = 25;
    nilai[3] = 26;
    nilai[4] = 27;

    // nilai[5] = {23, 24, 25, 26, 27}; // inisiasi dan mendefinisikan array

    cout << nilai << endl; //menampilkan adrss di memori sama seperti pointer
    cout << nilai[3] << endl; // jika belum didefinisikan maka berapapun indeksnya akan menampilkan adress array

    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;
    cout << nilai[0] << endl; // jika belum didefinisikan maka berapapun indeksnya akan menampilkan adress array

    // cara merubah nilai array
    int *ptr = nilai;
    *(ptr + 2) = 6; //mengakses array nilai yg ke 3 (0, 1, 2) awalnya 0
    nilai[3] = 7; //mengakses nilai ke 4 array(0, 1, 2, 3)

    cout << endl;
    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;

    cout << endl;
    cout << "ukuran array = "<< sizeof(nilai) << " byte" << endl;
    cout << "Jumlah member array = " << sizeof(nilai)/sizeof(int) << " byte" << endl;

    return 0;
}