#include <iostream>

using namespace std;

int x = 8; // variabel local

int getXglobal() {
    return x; // mengambil variabel global
}

int x_local() {
    x = 12; // variabel lokal scopenya x_local
    return x;
}

int main() {

    cout << "Ini adalah x Global scope: " << x << endl;
    int x = 10; // variabel local untuk main
    cout << "Ini adalah x main scope:" << x << endl;
    cout << "Ini adalah x Global scope: " << getXglobal() << endl;
    cout << "Ini adalah x dari tampilkan: " << x_local() << endl;

    if (true) { // block scope if
        int x = 7;
        cout << "Ini adalah x dari block if: " << x << endl;
    }

    cout << "Ini adalah x main scope:" << x << endl;

    return 0;
}