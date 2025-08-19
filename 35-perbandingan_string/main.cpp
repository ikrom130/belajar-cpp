#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama("ucup");

    //perbandingan string
    if (nama == "ucup") {
        cout << nama << endl;
    }

    string input;
    while (true) {
        cout << "Tebak nama: ";
        cin >> input;

        if (input == nama) {
            cout << "Tebakan anda benar! " << endl;
            break;
        }

        cout << "Tebakan salah!" <<endl;
    }

    cout << "Program selesai" << endl;

    return 0;
}