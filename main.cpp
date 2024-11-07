#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int c, d, i, q, r;

    cout << "Inserisci un numero" << endl;
    cin >> c;
    i = 0;
    for (d = 1; d <= c; d++) {
        q = (int) ((double) c / d);
        r = c % d;
        if (r == 0) {
            cout << d << "è divisore di " << c << endl;
            i = i + 1;
        }
    }
    if (i == 2) {
        cout << c << "è un numero primo" << endl;
    } else {
        cout << c << "non è un numero primo" << endl;
    }
    return 0;
}