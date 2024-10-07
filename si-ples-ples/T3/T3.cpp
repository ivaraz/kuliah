#include <iostream>
using namespace std;

//	Tugas 3 - ALPEMDAS
//  Muhammad Rifa Maulana Aziz


int main() {

//  Deklarasi Variabel yg digunakan
	string namaKasir, namaBarang;
	int nomorBarang, harga, jumlahBarang, totalBayar, pembayaran, diskon, totalDiskon, kembalian;

//	Program Kasir Toko Kelontong
	cout << "*************** I V A R  G U N S H O P ***************"<<endl<<endl;
	cout << "NAMA KASIR\t : ";
	getline(cin,namaKasir);
	
	cout << "NO BARANG\t : ";
	cin >> nomorBarang;
	
	cout << "NAMA BARANG\t : ";
	cin.ignore();
	getline(cin,namaBarang);
	
	cout << "HARGA\t\t : Rp.";
	cin >> harga;
	
	cout << "JUMLAH BARANG\t : ";
	cin >> jumlahBarang;
	
	cout << endl;
	cout << "************************************************"<<endl<<endl;
	
	totalBayar = harga * jumlahBarang;
	
	cout << "TOTAL BAYAR\t : Rp." << totalBayar;
	cout << endl;
	
	cout << "POTONGAN\t : Rp.";
	cin >> diskon;
	totalDiskon = totalBayar - diskon;
	
	cout << "PEMBAYARAN\t : Rp.";
	cin >> pembayaran;
	
	kembalian = pembayaran - totalDiskon;
	cout << "KEMBALIAN\t : Rp." << kembalian << endl << endl;
	cout << "************************************************"<< endl;
	cout << "  Terima kasih telah berbelanja di tempat kami  "<< endl;
	return 0;

}
