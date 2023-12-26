#include <iostream>

using namespace std;

int main() {

    // operator matematika (+, -, *, /)

    int a = 17;
    int b = 10;
    int hasil;

    // penjumlahan
    hasil = a + b;
    cout << a << "+" << b << "=" << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << "-" << b << "=" << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << "*" << b << "=" << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << "/" << b << "=" << hasil << endl;

    // modulus  
    hasil = a % b;
    cout << a << "%" << b << "=" << hasil << endl;

    // urutan eksekusi
    hasil = a + b * b;
    cout << a << "+" << b << "*" << b << "=" << hasil << endl;

    hasil = (a + b) * b;
    cout << a << "+" << b << "*" << b << "=" << hasil << endl;

    return 0;
}