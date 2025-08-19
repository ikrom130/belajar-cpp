#include <iostream>
using namespace std;

int main() {
    int a, t1 = 0, t2 = 1, nextTerm=0;
    cout << "Masukkan jumlah angka fibonacci yang mau ditampilkan: ";
    cin >> a;

    for (int i=1; i<a; i++ ){
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
        }

        nextTerm = t1 + t2; //nextTerm = 0+1
        t1 = t2; // 0 = 1
        t2 = nextTerm; // 1

        cout <<  nextTerm << ", ";
    }
    return 0;
}