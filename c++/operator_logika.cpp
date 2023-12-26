#include <iostream>

using namespace std;

int main() {

    int a = 3;
    int b = 2;

    bool hasil;
    // operator logika: and, or, not

    // not
    hasil = !(a == 2);

    // and
    cout << "and" << endl;
    hasil = (a == 3) and (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 3) and (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 2) and (b == 3); // false and true
    cout << hasil << endl;
    hasil = (a == 4) and (b == 5); // false and false
    cout << hasil << endl;

    // or
    cout << "or" << endl;
    hasil = (a == 3) or (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 2) or (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 5); // false and false
    cout << hasil << endl;


    

    // and



    return 0;
}