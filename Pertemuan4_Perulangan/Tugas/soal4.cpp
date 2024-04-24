#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int angka;
    char ulang;

    a:
    cout << "Masukkan Angka: ";
    cin >> angka;

    while ( (angka < 1) || (angka >10000)){
        cout<< "Invalid: 1<= angka <= 10000";
        goto a;
    }
    
    cout << "H" << string(angka, 'o') << "r" << string(angka,'e') << string (angka, '!');

    cout << "\nApakah anda ingin mencoba lagi? (Y/T)? ";
    cin >> ulang;
    ulang = toupper (ulang);

    if (ulang == 'Y'){
        goto a;
    }
    
    
    
    return 0;
}