#include <iostream>

using namespace std;

int main() {

    //typedef memberikan alias pada tipe data
    typedef int I;
    typedef int iVector20[2];
    typedef unsigned long ulo;

    I a = 10;
    iVector20 b = {1, 2};
    ulo c = 31436547658753423756;

    cout << "nilai a: " << a << endl;
    cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c: " << c << endl;
    return 0;
}