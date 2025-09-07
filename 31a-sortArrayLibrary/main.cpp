#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka) {
    cout<<"Array: ";
    for (int &a : angka) {
        cout<<a<<" ";
    }
    cout<<"\n";
}
void printArray(array <char, arraySize> &angka) {
    cout<<"Array: ";
    for (char &a : angka) {
        cout<<a<<" ";
    }
    cout<<"\n";
}

int main() {
    std::array <int, arraySize> angka = {3,6,8,1,5,4,9,2,3,0};
    std::array <char, arraySize> huruf = {'s','q','e','h','c','t','x','z','w','p'};

    printArray(angka);
    printArray(huruf);

    cout<<"\n";
    std::sort(angka.begin(), angka.end()); // mengurutkan isi array
    printArray(angka);
    std::sort(angka.begin(), angka.end(), greater<int>()); // mengurutkan isi array dari yg terbesar
    printArray(angka);
    std::sort(huruf.begin(), huruf.end()); // mengurutkan isi array
    printArray(huruf);
    std::sort(huruf.begin(), huruf.end(), greater<char>()); // mengurutkan isi array dari yg terbesar
    printArray(huruf);

    return 0;
}