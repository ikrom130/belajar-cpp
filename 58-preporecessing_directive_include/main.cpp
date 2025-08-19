#include <iostream> // dengan '<>' mengcopy semua code pada file di compiler di c++ berupa iostream
#include <string>
#include "library.h" // dengan "" mengambilcsemua code dari file buatan sendiri

using namespace std;

int main() {

    cout << "PI: " << PI << endl;
    cout << "KUADRAT: " << KUADRAT(5) << endl;
    cout << "max: " << max(5,6) << endl;
    cout << "data string: " << c << endl;

    return 0;
}