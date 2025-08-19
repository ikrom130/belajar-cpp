#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int main() {
    array<int, 5> nilai; // deklarasi array std library =  array<tipedata, jumlah array> nama array

    for (int i = 0; i < 5; i++) {
        nilai[i] = rand();
        cout << "isi dari Array ke-"<< i+1 << " adalah " << nilai[i];
        cout << " dengan adress " << &nilai[i] << endl;
    }

    cout << "ukuran dari array adalah " << nilai.size() << endl;
    cout << "adrees awal dari array adalah " << nilai.begin() << endl;
    cout << "adress akhir dari array adalah " << nilai.end() << endl;
    cout << "isi indeks array ke 3 adalah " << nilai.at(2) << endl;

    return 0;
}