#include <iostream>

//macro,
#define PI 3.14159265359 // alias dan gk disimpan di memori

using namespace std;

double pi = 3.14159265359; // nilai yg disimpan di momori

int main() {

    cout << "nilai PI " << PI << endl;
   //  cout << &PI << endl; tidak bisa karena tidak disimpan di memori

    cout << "double pi = " << pi << endl;
    cout << &pi << endl; // bisa


    return 0;
}