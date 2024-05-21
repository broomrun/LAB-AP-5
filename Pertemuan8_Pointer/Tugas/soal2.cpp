#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *px; x = 25;
    
    px = &x; //  menetapkan alamat memori dari x ke px
    *px = x; // mengakses nilai yang ditunjuk oleh px dan menetapkan nilai x ke lokasi itu (25)

    return 0;
}
