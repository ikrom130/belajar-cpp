#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
    int fibo;

    cout << "Menampilkan angka fibonacci ke berapa: ";
    cin >> fibo;

    cout << "Hasilnya adalah " << fibonacci(fibo);

    return 0;
}

int fibonacci(int n) {
    //cout << "Fungsi fibonacci " << n << endl;
    if ((n == 0 || n == 1)) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}