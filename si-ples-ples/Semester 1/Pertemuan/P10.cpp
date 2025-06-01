#include <iostream>
using namespace std;

/*
 Standard Library vs PRogrammer Defined Function
 Membuat module (fungsi)
 Procedure vs Function
 Prototype fungsi
 Parameter fungsi (actual & formal)
 Default parameter
 overload function
 variable lifecycle (Local, Global)

*/

// fungsi yang tidak mengembalikan nilai
// Procedure
//void tampil_angka(int angka){
//	cout << angka;
//}

// fungsi yang mengembalikan nilai
// function
//int tampil_bilangan(int angka){ // formal parameter
//	return angka;
//}
//void persegi();
//int hitung_luas(int p, int l);

//int hitung_luasbalok(int p, int l, int t);
//void luas_balok();

float hitung_volume(int r, int t);
void volume_balok();

int main(){
//	tampil_angka(12); cout << endl;
//	cout << tampil_bilangan(5); // actual parameter
//	cout << "Program persegi panjang\n";
//	persegi();
//	hitung_luas(int p, int l);
//	luas_balok();
	volume_balok();
	cin.get();
	return 0;
}
//void persegi(){
//	int p, l, luas;
//	cout << "Masukan panjang : "; cin >> p;
//	cout << "Masukan lebar : "; cin >> l;
//	
//	luas = hitung_luas(p, l);
//	cout << "Luas = " << luas;
//
//}
//
//int hitung_luas(int p, int l){
//	int luas = p * l;
//	return luas;
//}

//int hitung_luasbalok(int p, int l, int t){
//	int hasil = p * l * t;
//	return hasil;
//}
//void luas_balok(){
//	int p,l,t, hasil;
//	cout << "Masukan panjang : "; cin >> p;
//	cout << "Masukan lebar : "; cin >> l;
//	cout << "Masukan tinggi : "; cin >> t;
//	hasil = hitung_luasbalok(p, l, t);
//	cout << "Luas balok = "<< hasil;
//}

float hitung_volume(int r, int t){
	float volume = 3.14 * r * r * t;
	return volume;
}

void volume_balok(){
	float r,t, hasil;
	cout << "Masukan jari-jari : "; cin >> r;
	cout << "Masukan tinggi : "; cin >> t;
	hasil = hitung_volume(r, t);
	cout << "Volume tabung = "<< hasil;
}
