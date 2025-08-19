#include <iostream>
#include <array>

using namespace std;

int main() {
    //looping untuk array bawaan di c++11 keatas
    /*
     *  for (deklarasi variabel: array){
     *      statement
     *      }
     */

    array <int, 10> arrayNilai= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int nilai : arrayNilai) {
        // &nilai adalah alamat array bukan alamat index array
        cout << "Adress " << &nilai<< " nilainya " << nilai << endl;
        nilai *= 2; // tidak merubah isi array
    }

    //merubah isi array dengan looping lewat adress index
    for(int &nilaiRef : arrayNilai) {
        nilaiRef = nilaiRef * 2;
    }

    cout << endl;
    for(int &nilaiRef : arrayNilai) {
        cout << "Adress " << &nilaiRef << " nilainya " << nilaiRef << endl;
    }

    return 0;
}