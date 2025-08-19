#include <iostream>
#include <string>
#include <exception>
#include <array>

//1. syntax error
//2. linking error
//3. non-error
//4. runtime error, pembagian dengan 0

using namespace std;

int pembagian (int data1, int data2) {
    if ( data2 == 0) {
        // throw overflow_error("error: pembagi nol");
        throw "error: pembagi nol";
    }
    return data1/data2;
}

int main() {
    int a,b,c;

    while (true) {
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        array<int, 5> arr = {0,1,2,3,4};

        try {
            c = pembagian(a,b);
            cout << c << endl;
        // } catch (exception &e) {
        } catch (const char* e) {
            // cout << e.what() << endl;
            cout << e << endl;
        }
    }

    cout << "akhir program!" << endl;
    cin.get();
    return 0;
}