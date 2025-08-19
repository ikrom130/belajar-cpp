#include <iostream>
#include <string>

using namespace std;

int main() {

    //input string dari console getline(cin, variabel)
    string kalimat_input;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat_input);

    //cout << "kalimat yg diinput: " << kalimat_input << endl;

    // menghitung jumlah kata
    int posisi = 0;
    int jumlah = 0;

    while (true) {
        posisi = kalimat_input.find(" ", posisi+1);
        jumlah++;
        cout << "posisi: " << posisi << " jumlah: " << jumlah<< endl;
        if (posisi < 0) {
            break;
        }
    }

    cout << "Jumlah kata: " << jumlah << endl;

    return 0;
}