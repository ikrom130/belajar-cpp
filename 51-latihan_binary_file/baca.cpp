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

    Mahasiswa dataBaca;

    myFile.open("data.bin", ios::in | ios::binary);
    cout << sizeof(Mahasiswa) << endl;

    myFile.read(reinterpret_cast<char*>(&dataBaca), sizeof(Mahasiswa));
    //myFile.read(reinterpret_cast<char*>(&dataBaca), sizeof(Mahasiswa));

    cout << dataBaca.NIM << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    myFile.close();


    return 0;
}