#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int angka;
    cout<<"Masukkan suatu bilangan bulat: ";
    cin>>angka;

    if(angka % 2 == 0){
        cout<<"angka "<<angka<<" adalah bilangan genap\n";
    } else {
        cout<<"angka "<<angka<<" bukan bilangan genap\n";
    } 

    if(angka % 3 == 0){
        cout<<"angka "<<angka<<" habis dibagi 3\n";
    } else {
        cout<<"angka "<<angka<<" tidak habis dibagi 3\n";
    } 

    if(angka % 5 == 0){
        cout<<"angka "<<angka<<" habis dibagi 5\n";
    } else {
        cout<<"angka "<<angka<<" tidak habis dibagi 5\n";
    } 

    if(angka % 7 == 0){
        cout<<"angka "<<angka<<" habis dibagi 7\n";
    } else {
        cout<<"angka "<<angka<<" tidak habis dibagi 7\n";
    } 


    
    
    
    return 0;
}