#include <iostream>
#include <array>

using namespace std;

struct peserta {
    string nama;
    int umur;
};

struct lomba {
    string kategori;
    peserta juara1;
    peserta juara2;
};

int main(){
    peserta peserta1, peserta2; //deklarasi peserta1
    lomba lomba_lukis, lomba_foto;

    //inisiasi peserta1
    peserta1.nama = "John sayur";
    peserta1.umur = 22;

    //inisiasi peserta2
    peserta2.nama = "michel suyono";
    peserta2.umur = 16;

    //inisiasi lomba_lukis
    lomba_lukis.kategori = "Lukis cair";
    lomba_lukis.juara1 = peserta1;
    lomba_lukis.juara2 = peserta2;

    //inisiasi lomba_foto
    lomba_foto.kategori = "Foto Alam";
    lomba_foto.juara1 = peserta2;
    lomba_foto.juara2 = peserta1;

    cout << "LOMBA LUKIS KATEGORI : " << lomba_lukis.kategori << endl;
    cout << lomba_lukis.juara1.nama << " usia: " << peserta1.nama << endl;
    cout << lomba_lukis.juara2.nama << " usia: " << peserta2.nama << endl << endl;

    cout << "LOMBA LUKIS KATEGORI : " << lomba_foto.kategori << endl;
    cout << lomba_foto.juara1.nama << " usia: " << peserta2.nama << endl;
    cout << lomba_foto.juara2.nama << " usia: " << peserta1.nama << endl;

    return 0;
}