#include <iostream>
using namespace std;

// Tugas Praktikum Lab
// Muhammad Rifa Maulana Aziz
// Konversi Hari ke Detik

int main() {
	int hari, detik;
	
	cout << "Masukan total hari : ";
	cin >> hari;
	
	detik = hari * 24 * 60 * 60;
	
	cout << hari << " Hari = " << detik << " Detik";
	
	return 0;
}
