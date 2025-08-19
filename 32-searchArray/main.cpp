#include <algorithm>
#include <iostream>
#include <array>

using namespace std;
const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka) {
    cout << "Array: ";
    for (int &a : angka) {
        cout << a << " ";
    }
    cout << endl;
}
void printArray(array <char, arraySize> &huruf) {
    cout << "Array: ";
    for (char &a : huruf) {
        cout << a << " ";
    }
    cout << endl;
}

int main() {
    array <int, arraySize> angka = {8,2,4,1,5,6,9,7,3,0};
    array <char, arraySize> huruf = {'c','b','a','s','f','t','y','w','j','d'};

    int angkaCari;
    bool ketemu;

    cout << "Cari angka di Array " << endl;
    cout << "Masukkan angka: ";
    cin >> angkaCari;

    //sort dulu
    //search->binnary_search

    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu) {
        cout << "Ketemu!" << endl;
    } else {
        cout << "Tidak ketemu!" << endl;
    }

    cout << endl;
    printArray(angka);
    printArray(huruf);

    return 0;
}