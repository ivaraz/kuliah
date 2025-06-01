#include <iostream>
#include <iomanip>
using namespace std;

// Tugas Praktikum Lab
// Muhammad Rifa Maulana Aziz

int main() {
//	Program konversi Celcius ke Fahrenheit

	double F, C;
	
	cout << "Inputkan suhu dalam satuan Celcius : ";
	cin >> C;
	
	F = (1.8 * C) + 32;
	
	cout << fixed << setprecision(2);
	cout << "Suhu dalam Fahrenheit : "<< F;
	
	return 0;}
