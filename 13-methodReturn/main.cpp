#include <iostream>

using namespace std;

//worker / class tamp nilai kembalian dengan tipe void
void tampilkan (int input) {
    cout << "Menampilkan dengan void\n";
    cout << input << endl;
}

int kuadrat(int x) {
    int y;
    y = x * x;
    return y; // hasil akan dikembalikan ke int kuadrat
}

int tambah(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int input, hasil, a, b, c;

    cout << "Masukkan nilai kuadrat dar: ";
    cin >> input;
    hasil = kuadrat(input); // kuadrat adalah fungsi dengan nilai kembalian dari proses data dari input di class kuadrat
    cout << hasil <<endl << endl;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    c = tambah(a, b);
    tampilkan(c);

    return 0;
}