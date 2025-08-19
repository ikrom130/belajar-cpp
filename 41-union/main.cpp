#include <iostream>

using namespace std;

union halah {
    int id;
    string kata;
};

int main() {
    halah ketua;
    ketua.id = 12345678;

    cout << "nama id: " << ketua.id << endl;
    cout << "nama kata: " << ketua.kata << endl;

    ketua.kata = "hello";

    cout << "nama id: " << ketua.id << endl;
    cout << "nama kata: " << ketua.kata << endl;

    return 0;
}