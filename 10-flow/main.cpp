#include <iostream>
using namespace std;

int main() {
    int y=0;
    while (y <= 10) {
        y++;
        if (y == 5) {
            cout << y;
            continue; // skip statement dibawahnya jika kondisi if terpenuhi
        }
        cout << y;
    }
    /*for (int i=0; i<=10; i++) {
        if (i == 5) {
            break; // keluar dari kondisi for
        }
        cout << i << endl;
    }*/

    cout << "Akhirnya.." << endl;

    return 0;
}