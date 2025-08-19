#include <iostream>
using namespace std;


int main() {
    float a,b;
    char aritmatika;

    cout << "Selamat datang di program Aritmatika: " << endl;

    cout << "Masukkan Angka pertama: ";
    cin >> a;
    cout << "Masukkan Operasi +,-,/,*: ";
    cin >> aritmatika;
    cout << "Masukkan Angka kedua: ";
    cin >> b;

    switch (aritmatika) {
        case '+':
            cout << "Hasil perhitungan: " << a+b << endl;
            break;
        case '-':
            cout << "Hasil perhitungan: " << a-b << endl;
            break;
        case '*':
            cout << "Hasil perhitungan: " << a*b << endl;
            break;
        case '/':
            cout << "Hasil perhitungan: " << a/b << endl;
            break;
        default:
            cout << "Operasi aritmatika yang dimasukkan salah! " << endl;
    }

    //cout << a << aritmatika << b << endl;


    return 0;
}