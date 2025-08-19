#include <iostream>
#include <string>

using namespace std;

struct buah {
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main() {
    buah apel;
    buah jeruk;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 20000;
    apel.rasa = "Manis";

    jeruk.warna = "orange";
    jeruk.berat = 150.5f;
    jeruk.harga = 15000;
    jeruk.rasa = "asam";

    cout << " APEL "<< endl;
    cout <<  "- " << apel.warna << endl;
    cout <<  "- " << apel.berat << endl;
    cout <<  "- " << apel.harga << endl;
    cout <<  "- " << apel.rasa << endl;

    cout << "\n Jeruk "<< endl;
    cout <<  "- " << jeruk.warna << endl;
    cout <<  "- " << jeruk.berat << endl;
    cout <<  "- " << jeruk.harga << endl;
    cout <<  "- " << jeruk.rasa << endl;



    return 0;
}