#include <iostream>
using namespace std;

int main() {
    int n = 5;

    /*cout << "Masukkan panjang pola: ";
    cin >> n;*/

    /*cout << "Pola 1 \n";

    for (int i = 0; i <= n; i++) {
        for ( int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 2 \n";

    for (int i = 0; i <= n; i++) {
        for ( int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 3 \n";

    for (int i = 1; i <= n; i++) {
        for ( int j = 1; j < i; j++) {
            cout << " ";
        }
        for ( int k = n; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 4 \n";

    for (int i = 1; i <= n; i++) {
        for ( int j = n; j >= i; j--) {
            cout << " ";
        }
        for ( int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 5 \n";

    for (int i = 1; i <= n; i++) {
        for ( int j = n; j > i; j--) {
            cout << " ";
        }
        for ( int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 6 \n";

    for (int i = 1; i <= n; i++) {
        for ( int j = 1; j < i; j++) {
            cout << " ";
        }
        for ( int k = n; k >= (2*i - n); k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n Pola 7 \n";

    for (int i = 1; i <= n; i++) {
        for ( int j = n; j > i; j--) {
            cout << " ";
        }
        for ( int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for ( int j = 1; j < i; j++) {
            cout << " ";
        }
        for ( int k = n; k >= (2*i - n); k--) {
            cout << "*";
        }
        cout << endl;
    }*/

    cout << "\n Pola 8: \n" << endl;

    if (n>0) {
        cout << "#" << endl;
        for (int i = 2; i <= n; i++) {
            int jumlahBintang = i * 2 - 3;
            cout << "#";
            if (i!=n) {
                for (int k = 1; k <= jumlahBintang; k++) {
                    cout << "*";
                }
            } else {
                for (int k = 1; k <= jumlahBintang; k++) {
                    cout << "=";
                }
            }
            cout << "i" << endl;
        }
    }

    return 0;
}