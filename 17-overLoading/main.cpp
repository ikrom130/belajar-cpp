#include <iostream>

using namespace std;

// overloading = menimpa;
// menggunakan 1 nama funsi dengan berbagai spesifikasi fungsi

// basic function
int luas_kotak (int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

double luas_kotak( double sisi) {
    return sisi * sisi;
}

// overload function
int luas_kotak (int sisi) {
    int luas = sisi * sisi;
    return luas;
}

int main() {

    cout << "Luas kotax 2x3 adalah " << luas_kotak (2, 3) << endl;
    cout << "Luas kotax 2x3 adalah " << luas_kotak (5) << endl;
    cout << "Luas kotax 2x3 adalah " << luas_kotak (2.5) << endl;
    return 0;
}