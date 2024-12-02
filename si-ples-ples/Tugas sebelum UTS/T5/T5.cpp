#include <iostream>
using namespace std;

//	Tugas 5 - ALPEMDAS
//  Muhammad Rifa Maulana Aziz


int main() {

//  Deklarasi Variabel yg digunakan
	string namaKasir, namaBarang;
	int nomorBarang, harga, jmlBarang, jmlBayar, totalBayar, pembayaran, diskon, totalDiskon, kembalian;
	int limaPersen = (5/100);

//	Program Kasir Toko Kelontong
	cout << "*************** M A M A T  G U N S H O P ***************"<<endl<<endl;
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
	cin >> jmlBarang;
	
	cout << endl;
	cout << "************************************************"<<endl<<endl;
	
	jmlBayar = harga * jmlBarang;
	
	cout << "JUMLAH BAYAR\t : Rp." << jmlBayar << endl;
	
	if (jmlBayar > 200000){
		diskon = jmlBayar * limaPersen;
	} else {
		diskon = 0;
	}
	
	cout << "POTONGAN\t : Rp."<< diskon << endl;
	
	totalBayar = jmlBayar - diskon;
	
	cout << "TOTAL BAYAR\t : Rp.";
	cout << totalBayar<< endl;
	
	cout << "PEMBAYARAN\t : Rp.";
	cin >> pembayaran;
	
	kembalian = pembayaran - totalBayar;
	cout << "KEMBALIAN\t : Rp." << kembalian << endl << endl;
	cout << "**************************************************"<< endl;
	cout << "  Terima kasih telah berbelanja di tempat kami  "<< endl;
	return 0;

}
