#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int umur;

    cout << "Berapa umur kamu: ";
    cin >> umur;

    /* if (umur < 0) {
        cout << "Bukan manusia";
    } 
    else if (umur > 0 && umur < 5) {
        cout << "Kamu masih balita";
    } 
    else if (umur > 5 && umur < 17) {
        cout << "Kamu remaja";
    } 
    else if (umur > 17 && umur < 60) {
        cout << "Dewasa";
    } 
    else {
        cout << "Lansia";
    }
 */
switch (umur){
    case 1 ... 10:
    cout<< "kamu anak-anak ";
    break;
    case 11 ... 17:
    cout<< "kamu remaja ";
    break;
    case 18 ... 50:
    cout<< "kamu dewasa ";
    break;

    default : cout << "Kamu lansia";
    break;

}
    return 0;
}
