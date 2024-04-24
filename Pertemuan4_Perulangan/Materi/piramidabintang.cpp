#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi = 5;

    for (int i = 0; i < tinggi; i++){
        for (int j = tinggi; j> i+1; j--) {
            cout << " ";
        }
    }



    
    
    
    return 0;
}