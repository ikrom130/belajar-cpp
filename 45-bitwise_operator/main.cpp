#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(int val, string nama) {
    cout << nama << " " << bitset<8>(val) << endl;
}

int main() {
    int a = 6;
    int b = 10;
    int c;

    cout << " & = bitwise AND" << endl;
    c = (a & b);
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c: " << c << endl;

    cout << "\n | = bitwise inclusive OR" << endl;
    c = (a | b);
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c: " << c << endl;

    cout << "\n ^ = bitwise exclusive OR" << endl;
    c = (a ^ b);
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c: " << c << endl;

    cout << "\n << = SHBL geser bit ke kiri" << endl;
    c = a << 2; // bit geser ke kiri sebanyak 2
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c: " << c << endl;

    cout << "\n >> = SHBL geser bit ke kanan" << endl;
    c = a >> 1; // bit geser ke kanan sebanyak 1
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c: " << c << endl;

    return 0;
}

// bitwise operator
// & = bitwise AND
// | = bitwise inclusive OR
// ^ = bitwise exclusive OR
// ~ = NOT
// << = Shift bits left
// >> = Shift bits right