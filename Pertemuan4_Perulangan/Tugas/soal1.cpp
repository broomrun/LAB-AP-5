#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n;
    int bil = 1;
    char ulang;

    a:
    cout<<"Masukkan Jumlah perulangan: ";
    cin>>n;

    while (n<1){
        cout<<"Inputan tidak valid (n>=1)" << endl;
        goto a;
    }

    for (int i = 0; i<n; i++){
        cout<<bil<<" ";
        if (i % 3 == 0) {
            bil +=5;
        } else{
            bil+=3;
        }
    }
    
    cout << endl;

    cout<< "Apakah Kamu Ingin Mengulang Program (Y/T)? ";
    cin>> ulang;
    ulang= toupper(ulang);

    if (ulang == 'Y'){
        goto a;
    }
    
    
    return 0;
}