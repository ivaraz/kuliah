#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int jml,harga, jmlbrg, total_harga,total_pendapatan, maks = 100;
	string penjualan[maks][5];
	char selesai;
	
	do {
		if(jml >= maks){
			cout << "DATA SUDAH PENUH!\n";
			break;
		}
		cout << "Masukan ID Transaksi : "; cin >> penjualan[jml][0];
		cout << "Masukan Nama Produk : "; cin >> penjualan[jml][1];
		cout << "Masukan Harga : "; cin >> penjualan[jml][2];
		cout << "Masukan Jumlah : "; cin >> penjualan[jml][3];
		
		stringstream h,jb;
		h << penjualan[jml][2];
		h >> harga;
		jb << penjualan[jml][3];
		jb >> jmlbrg;
		total_harga = harga * jmlbrg;
		
		
		cout << "Total Harga : " << total_harga<<endl;
		cout << "Transaksi selesai? <y/t> : "; cin >> selesai;
		jml++;
		cout << endl;
	} while(selesai != 'y' && selesai != 'Y');
	
	cout << "Data Transaksi Penjualan:\n";
	cout << "============================================================================\n";
	cout << "|"
	 	 << setw(8) << "ID Transaksi" << setw(8)
		 << "|"
		 << setw(12) << "Nama Produk" << setw(9)
		 << "|"
		 << setw(13) << "Harga" << setw(7)
		 << "|"
		 << setw(7) << "Jumlah" << setw(5)
		 << "|"
		 << setw(7) << "Total Harga" << setw(5)
		 << "|"
		 << "\n============================================================================\n";
	
	for(int i = 0; i < jml; i++){
		penjualan[i][4] = total_harga;
		cout << "| " 
			 << setw(3) << penjualan[i][0] << setw(5) 
		 	 << "|" 
		 	 << setw(12) << penjualan[i][1] << setw(9)
			 << "|" 
			 << setw(13) << penjualan[i][2] << setw(7) 
			 << "|" 
			 << setw(7) << penjualan[i][3] << setw(5) 
			 << "|"
			 << setw(7) << total_harga << setw(5) 
			 << "|"
			 << endl;
			 total_pendapatan += total_harga;
	}
	cout << "\n=====================================================================================\n";
	cout << "Total Pendapatan : " << total_pendapatan;
	return 0;
}
