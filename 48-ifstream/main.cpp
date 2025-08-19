#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream myFile;

    string output, buffer;
    bool isData;

    myFile.open("data.txt");
    while (!isData) {
        getline(myFile, buffer);
        output += buffer + "\n";
        if (buffer == "data") {
            isData = true;
        }
    }
    cout << output << endl;

    getline(myFile, buffer);
    cout << buffer << endl;
    int no, jumlah_data = 0; string nama;
    while (!myFile.eof()) {
        myFile >> no;
        myFile >> nama;
        cout << no << "  " << nama << endl;
        jumlah_data++;
    }

    cout << jumlah_data << endl;

    return 0;
}