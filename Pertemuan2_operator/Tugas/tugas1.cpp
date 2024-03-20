#include <iostream>
using namespace std;

int main(){
    system("CLS");

    int I = 2, K = 7, L = 1, C = 9, U = 5, S = 6, d;
    bool a,b,c;
    
   /*  a. 3 - 1 < I OR K - 5 < 8 + 2 AND L +7 >= 9 + 3
    a. (2<2) or (2 < 10) and (8 >= 12)
        false or (true and false)
        false or false
            false */
    a= 3-1<I || K-5<8+2 && L+7>=9+3;
    /* b. (L % 3 > U) AND (C / U < S) OR (3 * 1 - K > 0)
    b. (1 % 3 > 5) and ((9 / 5 < 6) or (3 * 1 - 7 > 0))
       (1 > 5) and ((1 < 6) or (3 - 7 > 0))
        false and (true or false)
        false and true
            false */
    b= L%3>U && (C/U<S || 3*I-K>0);
    /* c. I-9>K OR L+3<4*C
    c. (2-9>7) or (1+3<(4*9))
    -7>7 or (4<38)
    false or true
        true */
    c= I-9>K || L+3<4*C;
    /* d. I OR K AND L XOR 3 SHL 2
    0010 or 0111
    1= 0001
    0011 shl 2 = 1100
    0111 and 0001 = 0001
    0001 xor 1100 = 1101
    0010 or 1101 = 1111 */
    d= I | K & L ^ 3 << 2;

    cout<<"Hasil dari a adalah "<<a<<endl;
    cout<<"Hasil dari b adalah "<<b<<endl;
    cout<<"Hasil dari c adalah "<<c<<endl;
    cout<<"Hasil dari d adalah "<<d<<endl;

    return 0;

}