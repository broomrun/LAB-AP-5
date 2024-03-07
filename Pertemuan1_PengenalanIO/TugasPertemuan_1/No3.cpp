#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    system("cls");
    double meter, kilometer;
    cout<<"Program Konversi" << endl;
    cout<<"Masukkan jarak dalam meter: " << endl;
    cin>>meter;

    kilometer= meter/1000;

    cout << fixed << setprecision(2);

    cout<<"Hasil Konversi dalam kilometer: " << endl;
    cout<< kilometer << " km" << endl;
    return 0;
} 
