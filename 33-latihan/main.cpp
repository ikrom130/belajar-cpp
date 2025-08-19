#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){

    int n = 5;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<" ";
        }
        for (int k=n; k>=(2*i)-n; k--) {
            cout<<"*";
        }
        cout<<endl;
    }

    //cout << jum << endl;
    return 0;
}