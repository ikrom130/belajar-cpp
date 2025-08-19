#include <iostream>
#include <string>

using namespace std;

int main() {
    string kata("cat");

    //menampilkan data pada string
    cout << kata[0] << endl;
    cout << kata[1] << endl;
    cout << kata[2] << endl;
    cout << kata[3] << endl;

    //merubah data pada indexs string
    kata[1] = 'e'; //data dalam index string dihitung char
    cout << kata << endl;

    //menyambung, concatenation
    string kata2 = kata + "ar";

    string kata3("Membahana");

    kata2.append(" "+kata3);

    string kata4( "ahay!!!");
    kata2 += " " + kata4 + " bet";
    cout << kata2 << endl;



    return 0;
}