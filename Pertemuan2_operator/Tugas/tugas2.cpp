#include <iostream>
#include <cmath>
using namespace std;

int main(){
    system("CLS");

    int a, b, c;
    double x1, x2;

    cout<<"Program menhitung akar-akar persamaan suatu persamaan kuadrat menggunakan rumus ABC: ";
    cout<<"\nMasukkan nilai A: ";
    cin>> a;
    cout<<"\nMasukkan nilai B: ";
    cin>> b;
    cout<<"\nMasukkan nilai C: ";
    cin>> c;

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    cout << "\nx1 = " << x1 << endl;
    cout << "\nx2 = " << x2 << endl;

    return 0;

}