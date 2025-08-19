#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
#include <string>

using namespace std;

int main() {
    ofstream myFile;

    // ios::out = default, operasi output
    // ios::app = menuliskan pada akhir baris
    // ios::trunc = default, membuat file jika tidak ada, jika ada akan dihapus

    myFile.open("data1.txt", ios::out);
    myFile << "tulisan data1\n";
    myFile.close(); // jgn lupa close klo open

    int a = 125785;
    myFile.open("data2.txt", ios::trunc);
    myFile << "tulisan data2\n";
    myFile << a ; // bisa masukkan tipe int tapi akan dikonfersikan ke string
    myFile.close(); // jgn lupa close klo open

    myFile.open("data3.txt", ios::app); // append
    myFile << "\n menulis data3";
    myFile.close(); // jgn lupa close klo open

    return 0;
}