#include <iostream>
using namespace std;

int main(){
    system ("cls");

    cout<< "Getline adalah fungsi untuk membaca satu baris teks dari input dan menyimpannya dalam sebuah string." << endl;
    cout<< "\nContoh: ";

    string nama;
    cout << "Masukkan Nama Kamu: ";
    getline(cin, nama); // akan menampilkan nama setelah di spasi
    cout << nama << endl;

    string nama2;
    cout << "\n";
    cout << "Cin adalah digunakan untuk memasukkan data dari standar input" << endl;
    cout << "\nContoh: ";
    cout << "Masukkan Nama Kamu: ";
    cin >> nama2; // hanya membaca satu kata
    cout<< nama2 << endl;
    
}