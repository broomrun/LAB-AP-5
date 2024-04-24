#include <iostream>
using namespace std;
int main() {
    int baris = 7; 
    int kolom = 4; 

    for (int i = 1; i <= baris; ++i) {
        for (int j = 1; j <= kolom; ++j) {
            if (j == 1 || j == 2) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}