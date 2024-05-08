#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai dari elemen segitiga Pascal
int pascalValue(int x, int y) {
    if (y == 0 || y == x) {
        return 1;
    } else {
        return pascalValue(x - 1, y - 1) + pascalValue(x - 1, y);
    }
}

// Fungsi untuk menampilkan segitiga Pascal
void Segitiga(int t) {
    int spasi = t - 1;

    for (int i = 0; i < t; ++i) {
        for (int s = 0; s < spasi; ++s) {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j) {
            cout << pascalValue(i, j) << " ";
        }
        cout << endl;
        spasi--;
    }
}


int main() {
    int t, x, y;

    // Meminta pengguna memasukkan tinggi segitiga Pascal (1-30)
    do {
        cout << "Masukkan tinggi segitiga Pascal (1-30): ";
        cin >> t;
    } while (t < 1 || t > 30);

    // Memanggil fungsi untuk menampilkan segitiga Pascal
    Segitiga(t);

    // Meminta pengguna memasukkan dua buah bilangan x dan y (baris dan kolom), (x>=1, y<=30 | y<=x)
    do {
        cout << "Input dua buah bilangan x dan y (baris dan kolom), (x>=1, y<=30 | y<=x): ";
        cin >> x >> y;
    } while (x < 1 || y > 30 || y > x);

    // Menampilkan nilai pada indeks [x][y]
    cout << "Nilai pada indeks [" << x << "][" << y << "]: "  << pascalValue(x, y) << endl;

    return 0;
}
