#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int panjang, lebar;

    cout << "Input panjang persegi panjang: ";
    cin >> panjang;

    cout << "Input lebar persegi panjang: ";
    cin >> lebar;

    for (int i = 0; i < lebar; i++) {
        for (int j = 0; j < panjang; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
