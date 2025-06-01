#include <iostream>
using namespace std;

// Muhammad Rifa Maulana Aziz
// IF - D
// 5520124115

int main(){
	// Mendeklarasi variable angka sekaligus dengan inialisasi dengan angka 1
	int angka = 1;
	
	// Perulangan do while
	do {
		cout << angka; // output variabel angka
		
		// pengkondisian, jika kelipatan 3
		if(angka %3 == 0){
			cout << " - Kelipatan 3"; // maka akan menambahkan teks disamping variabel angka
		}
		cout <<endl; // memberikan baris baru
		angka++;	// iterasi untuk menambahkan 1 pada angka di variabel angka
	} while( angka <= 20); // batas perulangan
	
	
	return 0;
}
