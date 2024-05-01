#include <iostream>
#include <typeinfo>
using namespace std;

int global;

string FizzBuzz(int angka) {
    string hasil;
    if (angka % 3 == 0 && angka % 5 == 0) {
        hasil = "FizzBuzz";
    } else if (angka % 3 == 0) {
        hasil = "Fizz";
    } else if (angka % 5 == 0) {
        hasil = "Buzz";
    } else {
        hasil = to_string(angka);
    }
    return hasil;
}

string deretsegitiga(int angka) {
    string hasil;
    for (int i = 1; i <= angka; i++) {
        int deret = (i * (i + 1));
        hasil += FizzBuzz(deret);
        if (i != angka) {
            hasil += ",";
        }
        if (deret % 3 != 0 && deret % 5 != 0) {
            global = deret;
        }
    }
    return hasil;
}

int main() {
    system("CLS");

    int angka;

    x:
    cout << "\nMasukkan angka: ";
    cin >> angka;

    if (angka < 3 || angka > 100) {
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100";
        goto x;
    } else {
        cout << deretsegitiga(angka) << endl;
        cout << "Tipe data " << global << " adalah " << typeid(global).name() << endl;
    }
    return 0;
}
