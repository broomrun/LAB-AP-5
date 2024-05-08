#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    system("CLS");
    vector<int> numbers; // Membuat vektor untuk menyimpan angka
    
    // Memasukkan deretan angka
    cout << "Masukkan sebuah deretan angka (akhiri dengan memasukkan huruf bukan angka):" << endl;
    int input;
    while (cin >> input) {
        numbers.push_back(input);
    }

    // Menampilkan deretan angka dan panjang vektornya
    cout << "Deretan angka yang dimasukkan:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Panjang vektor: " << numbers.size() << endl;

    // Membersihkan buffer cin jika input bukan angka
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Menghapus angka satu persatu dari vektor dan menampilkan panjang vektornya setelah setiap penghapusan
    while (!numbers.empty()) {
        cout << numbers.front() << endl;
        numbers.erase(numbers.begin());
    }

    cout << "Panjang vektor: " << numbers.size() << endl;

    cout << "Vektor telah kosong." << endl;

    return 0;
}
