#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fungsi untuk membalikkan sebuah string
string reverseString(const string& str) {
    string reversed = str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = reversed[i];
        reversed[i] = reversed[n - i - 1];
        reversed[n - i - 1] = temp;
    }
    return reversed;
}

int main() {
    char ulang;
    do {
        system("CLS");

        string kalimat;

        do {
            cout << "Masukkan string/kalimat maksimal 100 karakter huruf kapital ('A'-'Z') dan spasi (' '): ";
            getline(cin, kalimat);
        } while (kalimat.length() > 100 || kalimat.length() < 1);

        // Membagi string menjadi dua bagian
        string Kiri = kalimat.substr(0, kalimat.length() / 2);
        string Kanan = kalimat.substr(kalimat.length() / 2);

        // Membalikkan setiap bagian
        Kiri = reverseString(Kiri);
        Kanan = reverseString(Kanan);

        // Menggabungkan kedua bagian
        string StringAsli = Kiri + Kanan;

        cout << "String asli yang telah diperbaiki: " << StringAsli << endl;

        cout << endl;
        cout << "Apakah anda ingin mengulang program (Y/T) ? : ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
