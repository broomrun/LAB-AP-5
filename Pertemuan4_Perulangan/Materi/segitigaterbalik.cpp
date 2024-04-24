#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
