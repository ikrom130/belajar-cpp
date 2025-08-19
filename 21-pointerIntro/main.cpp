#include <iostream>

using namespace std;

int main() {
    int a = 10; // integer a punya nilai dan alamat di memori

    // pointer
    int *aPtr = nullptr;
    aPtr =  &a;

    cout << "Ini adalah nilai dari a: " << a << endl;
    cout << "Ini adalah alamat dari a: " << aPtr << endl;

    // dereferencing: mengambil data dari sebuah pointer

    cout << "Kita akan mengambil nilia dari aPtr: " << *aPtr << endl;

    return 0;
}