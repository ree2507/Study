#include <iostream>

using namespace std;

// operasi matematika
int pertambahan (int x, int y) {
    return x + y;
}

int pengurangan (int x, int y) {
    return x - y;
}

int perkalian (int x, int y) {
    return x * y;
}

int pembagian (int x, int y) {
    return x / y;
}
//batas operasi

//void log
void log(int result) {
    cout << "hasilnya adalah " << result << endl;
}
//batas void log

int main()
{
    int hasil1 = pertambahan(11, 37);
    log(hasil1);

    int hasil3 = pengurangan(10, 8);
    log(hasil3);

    int hasil4 = perkalian(2, 5);
    log(hasil4);

    int hasil5 = pembagian(36, 7);
    log(hasil5);

    return 0;
}