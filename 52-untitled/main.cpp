#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int NIM;
    char nama[50];
    char jurusan[50];
};

int main() {
    fstream myFile;

    Mahasiswa dataBaca;

    myFile.open("data.bin", ios::in | ios::binary);
    cout << sizeof(Mahasiswa) << endl;

    myFile.read(reinterpret_cast<char*>(&dataBaca), sizeof(Mahasiswa));
    // myFile.read(reinterpret_cast<char*>(&dataBaca.NIM), sizeof(Mahasiswa));
    // myFile.read(reinterpret_cast<char*>(&dataBaca.nama), sizeof(Mahasiswa));
    // myFile.read(reinterpret_cast<char*>(&dataBaca.jurusan), sizeof(Mahasiswa));

    cout << dataBaca.NIM << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    myFile.close();


    return 0;
}