#include <iostream>

using namespace std;

int main() {
    int a = 5; // variabel

    cout << "Adress dar a: " << &a << endl;
    cout << " Nilai dari a: " << a << endl << endl;

    int &b = a; // reference

    cout << "Adress dar b: " << &b << endl;
    cout << " Nilai dari b: " << b << endl << endl;

    b = 10;

    cout << "Nilai dari a: " << a << endl;
    cout << "Nilai dari b: " << b << endl << endl;

    a = 20;

    cout << "Nilai dari a: " << a << endl;
    cout << "Nilai dari b: " << b << endl << endl;


    return 0;
}