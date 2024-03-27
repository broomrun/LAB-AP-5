#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    string nama;
    int gol, anak; 
    long gaji, tunjanganA, Gajis, Pajak, GaBer  ;
    

    cout << "Masukkan nama anda: ";
    getline(cin,nama);
    cout << "Kamu berada di golongan berapa(1/2/3): ";
    cin >> gol;
    cout << "Jumlah anak: ";
    cin >> anak;

    if (gol == 1) {
        gaji = 5000000;
    } else if (gol == 2){
        gaji = 3000000;
    } else if (gol == 3){
        gaji = 2500000;
    }   else {
        cout << "Golongan tidak valid";
    }

    if (anak >= 1 && anak <=2){
        tunjanganA = 500000*anak;
    } else if (anak > 2){
        tunjanganA = 750000*anak;
    } else {
        tunjanganA = 0;
    }

    Gajis = gaji + tunjanganA;
    Pajak = gaji*0.05;
    GaBer = Gajis - Pajak;

    cout << fixed << setprecision(0);
    cout << "Masukkan nama anda: " << nama << endl;
    cout << "Masukkan Golongan (1,2,3): " << gol << endl;
    cout << "Jumlah Anak: " << anak << endl;
    cout << "Gaji total: " << GaBer << endl;

    return 0;
}