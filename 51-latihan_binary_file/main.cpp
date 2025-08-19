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
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "Ucup";
    mahasiswa1.jurusan = "kedokteran";

    mahasiswa2.NIM = 124;
    mahasiswa2.nama = "Otong";
    mahasiswa2.jurusan = "Farmasi";

    mahasiswa3.NIM = 125;
    mahasiswa3.nama = "Ngatiyem";
    mahasiswa3.jurusan = "Teknik Mesin";

    myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));

    myFile.close();

    return 0;
}