#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename T, typename U>
auto max(T data1, U data2) {
    return ((data1 > data2) ? (T)data1 : (U)data2);
}

int main() {

    int a = 17;
    string b = "Hello World!";
    double c = 7.14;
    float d = 9.14;
    auto e = max(a, c);

    cout << a << " tipe: " << typeid(a).name() << endl;
    cout << b << " tipe: " << typeid(b).name() << endl;
    cout << c << " tipe: " << typeid(c).name() << endl;
    cout << d << " tipe: " << typeid(d).name() << endl;
    cout << a << " tipe: " << typeid(a).name() << endl;

    return 0;
}