#include <iostream>
#include <string>
#include <limits>

#include "Player.hpp"
#include "Weapon.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("Snapan", 50);

    player1->display();
    weapon1->display();

    return 0;
}





/*
int aritmatika(){
    int a = 7;
    int b = 5;

    int hasil;

    //penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a <<" x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * a;
    cout << hasil << endl;
    return a,b,hasil;
}

int komparasi() {
    int a = 3;
    int b = 3;

    bool hasil1, hasil2;

    // komporasi, relation expression

    // sebnading == / sama dengan
    hasil1 = (a == b); //bernilai 1/ true jika sebandings

    // tidak sebanding != / tidak sama
    hasil2 = (a != b); //bernilai 0/false karena 2 sebanding 2

    // kurang dari
    hasil1  = (a < b);
    //lebih dari
    hasil2 = (a > b);

    // kurang dari sama dengan
    hasil1  = (a <= b);
    //lebih dari sama dengan
    hasil2 = (a >= b);

    cout << hasil1 << endl;
    cout << hasil2 << endl;
    return 0;
}

int operatotLogika() {
    int a = 3;
    int b = 2;

    bool hasil;

    //operator logika : not, and, dan Or

    // not bernilai kebalikan dari aslinya
    hasil = !(a == b); // aslinya 3 tidak sama dengan 2 maka bernlai true

    // and : && kedua nilai harus benar untuk bernilai true
    cout << "untuk and : " << endl;
    hasil = (a == 3) and (b == 2); //true dan treu
    cout << hasil << endl;
    hasil = (a == 3) and (b == 3); // true dan false
    cout << hasil << endl;
    hasil = (a == 2) && (b == 2); // false dan true
    cout << hasil << endl;
    hasil = !((a == 2) && (b == 3)); // false dan false not and
    cout << hasil << endl;

    // or / || salah satu nilai harus benar untuk bernilai true
    cout << "untuk OR : " << endl;
    hasil = (a == 3) or (b == 2); //true dan treu
    cout << hasil << endl;
    hasil = (a == 3) or (b == 3); // true dan false
    cout << hasil << endl;
    hasil = (a == 2) || (b == 2); // false dan true
    cout << hasil << endl;
    hasil = (a == 2) || (b == 3); // false dan false
    cout << hasil << endl;

    return 0;
}

int ifStat() {
    int a;
    cout << "Masukkan angka: ";
    cin >> a;

    // if statement
    // kondisi dalam boolean
    if (a == 5) { // dalam kurung adalah kondisi if
        cout << "nilai ini adalah 5" << endl; // if statement
    } else if (a == 3){
        cout << "nilai ini adalah 3" << endl;
    }else if (a == 1){
        cout << "nilai ini adalah 1" << endl;
    }else {
        cout << "bukan 1, 3 atau 5" << endl;
    }
    cout << "selesai." << endl;
    return 0;
}
*/

