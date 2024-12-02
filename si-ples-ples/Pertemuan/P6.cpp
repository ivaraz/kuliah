#include <iostream>
using namespace std;

// Pertemuan 6 Alpemdas


int main(){
//	string warna, keterangan;
//	
//	cout << "Inputkan warna : ";
//	cin >> warna;
//	
//	if (warna == "kuning" || warna == "Kuning" || warna == "KUNING") {
//		keterangan = "Siap-siap";
//	}
//	else if( warna == "hijau" || warna == "Hijau" || warna == "HIJAU"){
//		keterangan = "Jalan";
//	}
//	else if(warna == "merah" || warna == "Merah" || warna == "MERAH") {
//		keterangan = "Berhenti";
//	}
//	else {
//		keterangan = "bukan warna lalu lintas";
//	}
//	
//	cout << "Warna yang anda masukan adalah : "<< warna << endl;
//	cout << "yang berarti : "<< keterangan;
//int pilihan;
//string merk;
//double harga;
//
//cout << "Pilih [1..3] : ";
//cin >> pilihan;
//
//switch(pilihan){
//	case 1:
//		merk = "Adidas";
//		harga = 100000;
//		break;
//	case 2:
//		merk = "Nike";
//		harga = 75000;
//		break;
//	case 3: 
//		merk = "Reebok";
//		harga = 80000;
//		break;
//	default:
//		merk = "tidak ada merk";
//		harga = 0;
//}
//
//cout << "Sepatu yang anda pilih "<< merk << endl;
//cout << "Harganya "<< harga;


//string jabatan;
//int pilihan;
//double gaji;
//
//cout << "pilihan jabatan : ";
//cin >> pilihan;
//
//switch (pilihan){
//	case 1:
//		jabatan = "Operator";
//		gaji = 3000000;
//		break;
//	case 2:
//		jabatan = "Staff";
//		gaji = 4000000;
//		break;
//	case 3:
//		jabatan = "Manager";
//		gaji = 5000000;
//		break;
//	default :
//		jabatan = "Tidak ada";
//		gaji = 0;
//}
//
////cout << "Pilihan anda adalah : " << pilihan <<endl;
//cout << "Jabatan : "<<jabatan<<endl;
//cout << "gaji : "<<gaji;












int angka1, angka2, angka3;

cout << "Masukan bilangan ke-1: ";
cin >> angka1;

cout << "Masukan bilangan ke-2: ";
cin >> angka2;

cout << "Masukan bilangan ke-3: ";
cin >> angka3;
cout << endl;

if (angka1 >= angka2 && angka1 >= angka3){
	cout << "Angka terbesar adalah : "<< angka1;
} 
else if (angka2 >= angka1 && angka2 >= angka3){
	cout << "Angka terbesar adalah : "<< angka2;
} 
else {
	cout << "Angka terbesar adalah : "<< angka3;
}



	return 0;
}
