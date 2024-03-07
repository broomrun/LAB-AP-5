#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    system("cls");
    string nama, nim;
    char kom;
    float ipk;

    cout<<"Masukkan Nama Anda: ";
    getline(cin, nama);
    cout<<"Masukkan NIM Anda: ";
    cin>> nim;
    cout<<"Masukkan KOM Anda: ";
    cin>> kom;
    cout<<"Masukkan IPK Anda: ";
    cin>> ipk;

    cout<<"Data Mahasiswa/i: " << endl;
    cout<<"Nama Anda: " << nama << endl;   
    cout<<"NIM Anda: " << nim << endl;
    cout<<"KOM Anda: " << kom << endl;

    cout << fixed << setprecision(2);
    cout <<"IPK Anda: " << ipk << endl;
    cout<<"Terima Kasih" << endl;
    
    return 0;
}