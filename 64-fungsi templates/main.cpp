#include <iostream>
#include <string>

using namespace std;

template<typename T>

void tesPrint(T delpo) {
    cout << delpo << endl;
}

template<typename T>
int toInt(T delpos) {
    return int (delpos);
}

template<typename T, typename U>
T max(T data1, U data2) {
    return ((data1 > data2) ? data1 : data2);
}

int main() {

    tesPrint(5);
   tesPrint(5.8);
   tesPrint('c');
   //tesPrint(5.8);

    cout << toInt(10.101035) << endl;
    cout << max(10.101035, 12) << endl;
    cout << max<int>(10.101035, 6) << endl;
    cout << max<double>(8.101035, 9) << endl;

    return 0;
}