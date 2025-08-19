#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    string jurusan;
};



int main() {
    fstream myFile;
    Mahasiswa mahasiswa1, mahasiswa2;
    myFile.open("mhs.txt", ios::out | ios::app | ios::trunc);

    cout << "masukkan NIM mhs: ";
    cin >> mahasiswa1.NIM;
    myFile << mahasiswa1.NIM;
    cout << "masukkan nama mhs: ";
    cin >> mahasiswa1.nama;
    myFile << mahasiswa1.nama;
    cout << "masukkan jurusan mhs: ";
    cin >> mahasiswa1.jurusan;
    myFile << mahasiswa1.jurusan;
    // myFile << mahasiswa1;

    myFile.close();

    return 0;
}