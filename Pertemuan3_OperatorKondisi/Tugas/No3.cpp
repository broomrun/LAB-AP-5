#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    system ("CLS");
    float bb, tinggi, tinggim, bmi;
    
    cout << "Masukkan berat badan kamu(KG): ";
    cin >> bb;
    
    cout << "Masukkan tinggi badan kamu(CM): ";
    cin >> tinggi;

    tinggim = tinggi / 100;
    bmi = bb / (tinggim * tinggim);

    cout << fixed << setprecision(1); 
    if (bmi <= 18.5) {
        cout << "BMI Anda = " << bmi << " kamu underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 25) {
        cout << "BMI Anda = " << bmi << " kamu normal" << endl;
    } else if (bmi >= 25 && bmi <= 30) {
        cout << "BMI Anda = " << bmi << " kamu overweight" << endl;
    } else {
        cout << "BMI Anda= " << bmi << " kamu obesitas" << endl;
    }

    return 0;
}
