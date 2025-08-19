#include <iostream>

using namespace std;

int main() {
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    // merubah tipe data
    cout << a + (int)b << endl;
    cout << (float)a + b << endl;

    cout << (int)c << endl;
    cout << (int)c + a << endl;

    cout << char(c+a) << endl;  // d ditambah 5 defgh i


    return 0;
}