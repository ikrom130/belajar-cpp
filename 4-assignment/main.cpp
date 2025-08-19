#include <iostream>

using namespace std;



int main() {
    // assignment
    int a = 10;
    cout << "Nilai awal: " << a << endl;
    // assignment operator
    //variable: variable ekspresi opertator
    // a. =+. a. - 3
    //variable operator ekspresi
    a += 3;
    cout << "Ditambah 3: " << a << endl;
    a -= 3;
    cout << "Dikurangi 3: " << a << endl;
    a /= 3;
    cout << "Dibagi 3: " << a << endl;
    a *= 3;
    cout << "Dikali 3: " << a << endl;
    a %= 2;
    cout << "Modulus 2: " << a << endl;

    cin.get();
    return 0;
}

