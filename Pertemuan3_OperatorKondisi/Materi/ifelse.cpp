#include <iostream>
using namespace std;

int main() {
    system("CLS");
    char nilai;

    cout<<"Berapa nilai kamu: ";
    cin>> nilai;

    if (nilai == 'A'){
        cout<< "bagus pertahankan";
    } else if (nilai == 'B') {
        cout<< "Bagus Tingkatkan";
    } else if (nilai == 'C') {
        cout<< "Lebih Giat lagi";
    } else if (nilai == 'D') {
        cout<< "Belajarr";
    } else if (nilai == 'E') {
        cout<< "Aduhhh";
    } else {
        cout<<"Invalid, silahkan input lagi";
    }
    
    
    
    return 0;
}