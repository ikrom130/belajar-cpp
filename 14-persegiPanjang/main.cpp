#include <iostream>
using namespace std;

double luasPersegi(double panjang, double lebar) {
    double luas = panjang * lebar;
    return luas;
}

double kelilingPersegi(double panjang, double lebar) {
    double keliling = 2 * (panjang + lebar);
    return keliling;
}

void tampilkan_luas(double panjang, double lebar) {
    cout << "Tampilkan dengan void" << endl;
    cout << "Luas persegi: " << luasPersegi(panjang, lebar) << endl;
}

void tampilkan_keliling(double panjang, double lebar) {
    cout << "Tampilkan dengan void" << endl;
    cout << "keliling persegi: " << kelilingPersegi(panjang, lebar) << endl;
}

int main() {
    double p, l;

    cout << "Masukkan lebar persegi: ";
    cin >> l;
    cout << "Masukkan panjang persegi: ";
    cin >> p;

    tampilkan_luas(p,l);
    tampilkan_keliling(p,l);



    return 0;
}