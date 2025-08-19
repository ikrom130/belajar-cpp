#include <iostream>
using namespace std;

int main() {
    int a = 1;

    do { //do aksi/statement do akan selalu dieksekusi minimal 1 kali walaupun syarat tidak terpenuhi
        cout << "Horee! " << a << endl;
        a++; // statement untuk merubah syarat
    } while(a < 3); // perulangan / aksi akan terus dieksekusi sampai syarat tidak terpenuhi

    cout << "Selesai!" << endl;


    return 0;
}