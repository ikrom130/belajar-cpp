#include <iostream>
using namespace std;

int main() {
    //increment dan decrement
    //preincrement dan postincrement

    int a = 5;
    int b = 5;

    //postincrement
    cout << a << endl;
    cout << a++ << endl; // a = a+1, a += 1;
    cout << a << endl << endl;  // operasi increment dijalankan setelah print

    //preincrement
    cout << b << endl;
    cout << ++b << endl; // operasi increment dijalankan sebelum print
    cout << b << endl << endl << endl;

    //postdecrement
    cout << a << endl;
    cout << a-- << endl; // a = a-1, a -= 1;
    cout << a << endl << endl;  // operasi decrement dijalankan setelah print

    //predecrement
    cout << b << endl;
    cout << --b << endl; // operasi decrement dijalankan sebelum print
    cout << b << endl;

    return 0;
}