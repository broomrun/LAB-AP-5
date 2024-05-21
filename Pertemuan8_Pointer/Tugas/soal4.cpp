#include <iostream>
using namespace std;

void kalkulator (int *angka1, int* angka2, int* hasil, char operasi){
    switch(operasi){
        case '+':
            *hasil = *angka1 + *angka2;
            break;
        case '-':
            *hasil = *angka1 - *angka2;
            break;
        case '*':
            *hasil = *angka1 * *angka2;
            break;
        case '/':
            if (*angka2 != 0){
            *hasil = *angka1 / *angka2;}
            else {
                cout << "Error: Tidak Terdefinisi";
            }
            break;
        default:
            cout << "Operasi yang dimasukkan tidak valid" << endl;
            break;
    }
}

int main() {
    system("CLS");
    char operasi;
    int angka1, angka2, hasil;

    cout << "Masukkan operasi (+, -, *, /):  ";
    cin >> operasi;

    cout << "Masukkan dua angka (5 4): ";
    cin >> angka1 >> angka2;

    kalkulator (&angka1, &angka2, &hasil, operasi);
    
    cout << "Hasil: " << hasil << endl;
    
    return 0;
}