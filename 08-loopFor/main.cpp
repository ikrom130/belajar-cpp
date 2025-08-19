#include <iostream>
using namespace std;
int main() {
    cout << "Awal loop ke-1" << endl;
    // for (inisialisasi; loop kondisi; increment) // bisa juga menggunakan decrement
    for(int counter = 1; counter <= 10; counter++) {
        cout << counter << endl; // statement for
    }
    cout << "Awal loop ke-2" << endl;
    for(int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
    cout << "Awal loop ke-3" << endl;
    for(int counter = 1; counter >= -10; counter-= 2) {
        cout << counter << endl;
    }

    int total = 0;
    cout << "Awal loop ke-4" << endl;
    for(int i = 1; i <= 10; i++) {
        total += i;
        cout << i << " || " << total << endl;
    }

    int b = 0;
    cout << "Awal loop ke-5" << endl;
    for(int a = 1; a <= 10; b += a,a++) {
                cout << a << " || " << b << endl;
    }

    cout << "Loop Telah berakhir" << endl;

    return 0;
}