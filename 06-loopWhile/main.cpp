#include <iostream>
using namespace std;

int main() {
    int a = 5;

    while (a < 10) { //a<10: Syarat while
        cout << "Horee!"; //
        cout << a << endl; //aksi looping while yg terus dieksekusi ketika syarat while terpenuhi
        a += 1; // kondisi yg dibuat untuk keluar dari syarat
    }

    cout << "Selesai!" << endl;


    return 0;
}