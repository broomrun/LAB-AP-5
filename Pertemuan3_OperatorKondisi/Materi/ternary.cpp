#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi;
    string hasil;

    cout<<"masukkan tinggi badan: ";
    cin>> tinggi;

    hasil = (tinggi > 200) ?  "Kamu gak berbakat" : "kamu berbakat ";
    cout << hasil<<endl;
    
    return 0;
}


    
    /* int umur;
    string hasil;

    cout<< "Umur kamu berapa: ";
    cin>> umur;

    hasil = (umur > 1000) ? cout << "Kmu bukan manusia": "kamu mungkin manusia";

    
    return 0;
} */