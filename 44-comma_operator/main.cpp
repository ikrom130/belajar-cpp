#include <iostream>

using namespace std;

void println(int val) {
    cout << val << endl;
}

int main() {
    int a;
    int b;
    int c;

    /* a=4;
    b=6;     // inisialisasi normal
    c=a+b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;*/

    // inisialisasi dengan comma
    c = (a=4, println(a), b=6, println(b), (a+b));

    cout << "c: " << c << endl;

    return 0;
}