#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bilbul;
    
    x:
    cout<<"Masukkan bilangan bulat: ";
    cin>>bilbul;

    if (bilbul % 2 == 0){
        goto x;
    } 

    if (bilbul / bilbul == 1){
        if (bilbul % 2 != 0 && bilbul % 3 != 0 && bilbul % 7 != 0 ){
            cout << bilbul << " adalah bilangan prima";
        } else{
            cout << bilbul << " bukan bilangan prima";
        }
    }
    
    
    return 0;
}