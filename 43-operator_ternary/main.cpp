#include <iostream>
#include <string>

using namespace std;

int main() {

    // ternary operator
    // kondisi ? hasil1 : hasil2 -> jika benar eksekusi hasil1 jika salah eksek hasil2
    // kondisi ternary harus berupa boolean
    string hasil1, hasil2, output;

    hasil1 = "clue: angka lebih kecil";
    hasil2 = "clue: angka lebih besar";

    int a = 5;
    int b;
    //int b = 7;

    cout << "tebak angka: ";
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;

    std::cout << output << std::endl;

    return 0;
}