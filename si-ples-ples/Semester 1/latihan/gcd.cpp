#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        cout << a << " " << b << endl;
    }
    return a;
}

int main() {
    int num1, num2;
    
    cout << "Masukkan dua bilangan: ";
    cin >> num1 >> num2;
    
    cout << "FPB dari " << num1 << " dan " << num2 << " adalah: " << gcd(num1, num2) << endl;
    
    return 0;
}

