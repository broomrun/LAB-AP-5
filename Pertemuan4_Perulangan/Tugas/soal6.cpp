#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n;
    char ulang;

    a:
    cout << "Masukkan nilai kuadrat yang ingin dijumlahkan: ";
    cin >> n;

    int jumlah = 0;
    for (int i = 2; i <= n; i += 2) {
        jumlah += i * i;
    }

    cout << "Jumlah kuadrat bilangan genap sampai " << n << " adalah: " << jumlah << endl;

    cout << "\nApakah anda ingin mencoba lagi? (Y/T)? ";
    cin >> ulang;
    ulang = toupper (ulang);

    if (ulang == 'Y'){
        goto a;
    }
    

    
    
    
    return 0;
}