#include <iostream>
using namespace std;
int main() {
    int rows = 4; 
    int cols = 7; 

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            if (j == 1 || j == 2) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}