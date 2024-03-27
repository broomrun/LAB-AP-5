#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int bilbul;

    cout << "Masukkan Bilangan Bulat: ";
    cin>> bilbul;

    if (bilbul % 2 == 0){
        cout <<  bilbul << " adalah bilangan genap ";
    }   else {
        cout << bilbul << " adalah bilangan ganjil";
    }
    
    
    
    return 0;
}