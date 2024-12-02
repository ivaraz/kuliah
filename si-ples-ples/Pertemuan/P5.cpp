#include <iostream>
using namespace std;

int main() {
//	C++ Decision Making

//	Penggunaan If
//	int angka = -1;
//	if(angka > 0) {
//		cout << "Positif";
//	} else {
//		cout << "Negatif";
//	}

//  ternary operator
	
//	string bil;
//	bil = (angka > 0) ? "positif" : "negatif";
//	cout << bil;
	
//	nested if
	int angka = 1;
	if(angka > 0) {
		cout << "Positif"; 
		if(angka %2 == 1) {
			cout << "Ganjil";
		} else {
			cout << "Genap";
		}
	} else {
		cout << "Negatif";
	}

	
	return 0;
}
