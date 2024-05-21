#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char a[] = "K O M P U T E R";
    char *ptr; // mendeklarasikan pointer ke char
    ptr = a;

    cout << "Huruf kelima dari kata K O M P U T E R adalah: " << *(ptr + 8) << endl;
    
    
    return 0;
}