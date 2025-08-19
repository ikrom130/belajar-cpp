#include <iostream>
#include <cmath> // mengandung funsi operasi matematik seperti akar pembulatan, dll.
#include <cstdlib> // mengandung fungsi random

using namespace std;



int main() {

    char lanjut;
    while (true) {
        cout << "Lempar dadu? (y/n)";
        cin >> lanjut;
        if (lanjut=='y') {
            cout << 1 + (rand() % 6) << endl;
        } else if (lanjut=='n') {
            break;
        } else {
            cout << "salah!! Ketik y/n dong kakakk!!" << endl;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << 1 + (rand() % 6) << endl; // % 6 adalah batasan untuk angka random
    }
    int x;

    cout << " Menghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x);

    cout << "akarnya adalah: " << y;

    return 0;
}