#include <iostream>
using namespace std;

void hasil_pangkat(int a, int n) {
	int hasil = 1;
	
	for(int i = 0; i < n; i++){
		hasil *= a;
	}
	cout << hasil;
}

main(){
	int angka,pangkat;
	
	cout << "Masukan angka\t\t: "; cin >> angka;
	cout << "Masukan jumlah pangkat  : "; cin >> pangkat;
	cout << "Hasilnya adalah ";
	hasil_pangkat(angka, pangkat);
	
	return 0;
}
