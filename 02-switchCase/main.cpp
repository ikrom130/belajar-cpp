#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukkan nilai: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Benar! ini adalah nilai 1." << endl;
            break;
        case 2:
            cout << "Benar! ini adalah nilai 2." << endl;
            break;
        case 3:
            cout << "Benar! ini adalah nilai 3." << endl;
            break;
        case 4:
            cout << "Benar! ini adalah nilai 4." << endl;
            break;
        case 5:
            cout << "Benar! ini adalah nilai 5." << endl;
            break;
        default:
            cout << "Default!" << endl;
    }

    return 0;
}