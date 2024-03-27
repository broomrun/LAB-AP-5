#include <iostream>
#include <cmath>
using namespace std;

#define phi 3.14159

int main() {
    system("CLS");
    char pilih;
    double r, t, s, a, b, c, luas, volume;

    cout << "Program Mengitung Luas Permukaan dan Volume: ";
    cout << "\n1. Kerucut";
    cout << "\n2. Limas Segitiga";
    cout << "\n3. Bola";
    cout << "\n4. Prisma";

    cout << "\nPilih Bangun Ruang yang Ingin Dihitung (1/2/3/4): ";
    cin >> pilih;

    switch (pilih) {
        case '1':
            cout << "Masukkan jari-jari: ";
            cin >> r;
            cout << "Masukkan tinggi: ";
            cin >> t;
            s = sqrt(r * r + t * t);
            luas = phi * r * (s + r);
            volume = 0.33 * phi * r * r * t;
            cout << "Luas permukaan kerucut adalah: " << luas << endl;
            cout << "Volume kerucut adalah: " << volume << endl;
            break;

        case '2':
            cout << "Masukkan alas: ";
            cin >> a;
            cout << "Masukkan tinggi: ";
            cin >> t;
            cout << "Masukkan sisi: ";
            cin >> s; // Anda lupa titik koma di sini
            luas = (0.5 * a * t) + (3 * s);
            volume = (0.33 * (0.5 * a * t)) * t; // Anda lupa kurung di sini
            cout << "Luas permukaan limas segitiga adalah: " << luas << endl;
            cout << "Volume limas segitiga adalah: " << volume << endl;
            break;

        case '3':
            cout << "Masukkan jari-jari: ";
            cin >> r;
            luas = 4 * phi * r * r;
            volume = 1.33 * phi * r * r * r;
            cout << "Luas permukaan bola adalah: " << luas << endl;
            cout << "Volume bola adalah: " << volume << endl;
            break;

        case '4':
            cout << "Masukkan sisi tegak a: ";
            cin >> a;
            cout << "Masukkan sisi tegak b: ";
            cin >> b;
            cout << "Masukkan sisi tegak c: ";
            cin >> c;
            cout << "Masukkan tinggi: ";
            cin >> t;
            luas = (0.5 * a * t) + (a * t) + (b * t) + (c * t);
            volume = (0.5 * a * t) * t; // Anda menggunakan variabel yang salah untuk menghitung volume
            cout << "Luas permukaan prisma adalah: " << luas << endl;
            cout << "Volume prisma adalah: " << volume << endl;
            break;

        default:
            cout << "error" << endl;
    }

    return 0;
}
