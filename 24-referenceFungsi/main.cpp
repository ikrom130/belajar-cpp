#include <iostream>

using namespace std;

void fungsi(int &); // prototype dengan input references
int kuadrat(int &);

int main() {
    int a = 5;

    cout << "Adress a: " << &a << endl;
    cout << "Nilai a adalah " << a << endl;

    fungsi(a); // fungsi dengan inputan pointer
    kuadrat(a);

    cout << "Nilai dari a adalah " << a << endl;



    return 0;
}

void fungsi( int &b) {
    cout << "Adress b: " << &b << endl;
    cout << "Nilai b adalah " << b << endl; //dereference
}

int kuadrat(int &valRef) {
    return valRef = valRef * valRef;
}