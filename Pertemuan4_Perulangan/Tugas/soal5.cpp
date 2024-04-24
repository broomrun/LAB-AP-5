#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil;
    bool prima;
    char ulang;
    
    a:
    cout << "Masukkan bilangan yang ingin diperiksa: ";
    cin >> bil;

    while ( bil < 1){
        cout << "Invalid: bilangan harus >= 1\n";
        goto a;
    }

    for ( int i = 2; i <= bil / 2; i++){
        if (bil % i == 0){
            prima = false;
        } else {
            prima = true;
        }
    }

    if (prima){
        cout << bil << " adalah bilangan prima";
    } else {
        cout << bil << " bukan bilangan prima";
    }

    cout << "\nApakah anda ingin mencoba lagi? (Y/T)? ";
    cin >> ulang;
    ulang = toupper (ulang);

    if (ulang == 'Y'){
        goto a;
    }
    
    return 0;
}