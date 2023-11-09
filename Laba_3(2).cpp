#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int binaryNumber;
    cout << "Введите число в двоичной системе счисления: ";
    cin >> binaryNumber;
    cout << "Число в десятичной системе счисления: " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}