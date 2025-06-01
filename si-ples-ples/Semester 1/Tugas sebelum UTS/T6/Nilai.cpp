#include <iostream>
using namespace std;

// Tugas 6 Alpemdas
// Muhammad Rifa Maulana Aziz
// Konversi Nilai ke Huruf


int main(){
	int nilai;
	char huruf;
	
	cout << "Masukan nilai : ";
	cin >> nilai;
	
	if (nilai >= 80 && nilai <= 100 ){
		huruf = 'A';
	}
	else if (nilai >= 65 && nilai <= 79){
		huruf = 'B';
	}
	else if (nilai >= 50 && nilai <= 64){
		huruf = 'C';
	}
	else if (nilai >= 35 && nilai <= 49){
		huruf = 'D';
	}
	else if (nilai >= 0 && nilai <= 34){
		huruf = 'E';
	}
	else {
		cout << "karakter yang anda masukan bukan nilai!";
		return 0;
	}
	
	cout << "Nilai Anda adalah : "<< nilai <<endl;
	cout << "Grade : "<<huruf;
}
