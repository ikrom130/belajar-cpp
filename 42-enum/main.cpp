#include <iostream>

using namespace std;

enum warna {
    merah, putih, hitam, coklat = 5, kuning, biru
};

int main() {
    warna kain;

    kain = hitam;
    cout << kain << endl;

    kain = coklat;
    cout << kain << endl;

    if (kain == coklat) {
        cout << "warna kain coklat" << endl;
    }

    return 0;
}