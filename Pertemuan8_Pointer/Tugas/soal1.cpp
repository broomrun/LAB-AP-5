#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int ganjil[20];
    int index = 0;

    for (int i = 1; i <= 20; i+=2){
        ganjil[index] = i;
        index++;
    }
    
    for (int i = 0; i < 10; i++){
        cout << "Bilangan ganjil: " << ganjil[i] << ", Alamat memori: " << &ganjil[i] << endl;

    }
    
    
    return 0;
}