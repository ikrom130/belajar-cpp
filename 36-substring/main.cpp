#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat1("dayat suka olahraga supaya sehat");
    string kalimat2("rudi suka makan pisang di pagi hari");
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    // substring, mengambil kata di tengah-tengah kalimat
    // nama_variabel.substr(index_mulai, jumlah_index
    cout << kalimat1.substr(6,8) << endl;
    cout << kalimat2.substr(11,6) << endl;

    //mencari posisi pada string
    cout << "posisi olahraga: ";
    cout << kalimat1.find("olahraga") << endl;
    cout << "Posisi pisang: ";
    cout << kalimat2.find("pisang") << endl;

    int a = kalimat1.find("a"); // dapat index
    cout << a << endl;
    cout << kalimat1.find ("a", a+3) << endl;//mencari posisi a ke-3

    //mencari posisi dari belakang
    cout << kalimat2.rfind("i") << endl;

    return 0;
}