#include <iostream>
#include <string>

using namespace std;

void tampilkan (string k1, string k2){
    cout << "1. " << k1 << endl;
    cout << "2. " << k2 << endl;}

int main() {

    string kalimat1("aku suka kamu suka siapa? dia!");
    string kalimat2("wakanda forevah!");
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    //swap string
    kalimat1.swap(kalimat2);
    cout << "\nSwap kalimat" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    // mengganti kata di tengah-tengah
    kalimat1.replace(13,2, "er");
    int posisi = kalimat2.find("dia");
    kalimat2.replace(posisi, 3, "otong");
    cout << "\nReplace kalimat" << endl;
    tampilkan(kalimat1, kalimat2);

    //insert string di tengah-tengah
    //insert(setelah_index_berapa, string baru)
    kalimat1.insert(8, "di hati ");
    cout << "\ninsert string" << endl;
    tampilkan(kalimat1, kalimat2);


    return 0;
}