#include <iostream>
using namespace std;

int main() {
    system("CLS");

    string kalimat;
    char huruf;

    cout << "Input sebuah kalimat: ";
    getline(cin, kalimat);
    cout << "Input sebuah huruf yang ingin dihapus: ";
    cin >> huruf;

    int hapus = 0;
    string hasil;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] != huruf) {
            hasil += kalimat[i];
        } else {
            hapus++;
        }
    }

    cout << hasil << endl;
    cout << "Karakter terhapus = " << hapus << endl;

    return 0;
}
