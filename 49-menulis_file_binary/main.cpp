#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream myFile;
    int number = 1;
    myFile.open("data1.bin", ios::out | ios::binary); //file ditulis dalam bahasa hexadesimal, bukanya pake app hex
    myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    myFile.close();
    return 0;
}