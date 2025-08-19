#include <iostream>

using namespace std;

// default argument atay nilai standard
double volumeKubus (double p = 1, double l = 1, double t=2);

int main() {

    cout << "Volume kubus: " << volumeKubus(3, 4, 5) << endl;
    cout << "Volume kubus: " << volumeKubus(3, 4) << endl;
    cout << "Volume kubus: " << volumeKubus(3) << endl;
    cout << "Volume kubus: " << volumeKubus() << endl;

    return 0;
}

double volumeKubus (double p, double l, double t) {
    return p * l * t;
};