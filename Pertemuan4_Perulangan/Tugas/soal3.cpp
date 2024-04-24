#include <iostream>
using namespace std;

int main() {
    system("CLS"); 

    int tahun, interval;

a:
    cout << "Masukkan tahun yang ingin diperiksa: ";
    cin >> tahun;

    while (tahun <= 1000 || tahun >= 9000) {
        cout << "Invalid: tahun harus >= 1000 dan <= 9000\n";
        goto a;
    }

b:
    cout << "Masukkan interval: ";
    cin >> interval;

    while (interval <= -tahun || interval >= 9999 - tahun) {
        cout << "Invalid: interval harus (-Tahun <= Interval <= 9999 - Tahun)\n";
        goto b;
    }

    if (interval >= 0) {
        for (int i = 0; i <= interval; i++) {
            int cek = tahun + i;
            if ((cek % 4 == 0 && cek % 100 != 0) || (cek % 400 == 0))
                cout << cek << " kabisat" << endl;
            else
                cout << cek << " bukan kabisat" << endl;
        }
    } else {
        for (int i = 0; i >= interval; i--) {
            int cek = tahun + i;
            if ((cek % 4 == 0 && cek % 100 != 0) || (cek % 400 == 0))
                cout << cek << " kabisat" << endl;
            else
                cout << cek << " bukan kabisat" << endl;
        }
    }

    return 0;
}
