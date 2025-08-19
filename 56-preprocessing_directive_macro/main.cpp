// pre processing directive
// macro adalah alias, pengganti kata seperti 3.14 diganti dengan #define PI 3.14---
#include <iostream>

#define  PI 3.14159265359 // biasanya setiap mendifine menggunakan huruf kapital
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A : B)

// akhir dari preprocessing directive

using namespace std;

double pi = 3.14159265359; // disimpan di memori dan bisa diubah

int main() {
    cout << "nilai pi: " << PI << endl;

    cout << "bahasa: " << BAHASA << endl;
    #undef BAHASA
    #define BAHASA "inggris"
    cout << "bahasa: " << BAHASA << endl;

    cout << "kuadrat: " << KUADRAT(5) << endl;

    cout << "max: " << MAX(5,10) << endl;
    return 0;
}