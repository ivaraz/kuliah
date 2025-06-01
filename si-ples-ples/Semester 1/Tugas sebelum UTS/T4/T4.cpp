#include <iostream>
using namespace std;

//	Tugas 4 - AlPEMDAS
//  Muhammad Rifa Maulana Aziz

int main() {
//	Deklarasi Variabel yg digunakan
	string nama_pegawai;
	int no_pegawai, gaji_pokok, jml_jam_lmbr, total_gaji, tunjangan, total_jam_lmbr;
	
//	Program SLIP GAJI KARYAWAN
	cout << "----------SLIP GAJI KARYAWAN----------"<< endl;
	cout << "       PT. MENCARI CINTA SEJATI      "<< endl << endl;
	cout << "# NO PEGAWAI\t\t: "; cin >> no_pegawai;
	cout << "# NAMA PEGAWAI\t\t: ";
	cin.ignore();
	getline(cin, nama_pegawai);
	cout << "# GAJI POKOK\t\t: Rp."; cin >> gaji_pokok;
	cout << "# JUMLAH JAM LEMBUR\t: ";
	cin >> jml_jam_lmbr;
	
//	Proses Logic
	total_jam_lmbr = jml_jam_lmbr * (gaji_pokok * 0.05);
	tunjangan = gaji_pokok * 0.1;
	total_gaji = gaji_pokok + total_jam_lmbr + tunjangan;
	cout << "--------------------------------------" << endl << endl;
	
	cout << "NO PEGAWAI\t: " << no_pegawai << endl;
	cout << "NAMA PEGAWAI\t: " << nama_pegawai << endl;
	cout << "GAJI POKOK\t: Rp." << gaji_pokok << endl;
	cout << "UPAH LEMBUR\t: Rp."<< total_jam_lmbr << endl;
	cout << "TUNJANGAN\t: Rp." << tunjangan << endl;
	cout << "TOTAL GAJI\t: Rp."<< total_gaji << endl << endl;
	
	cout << "--------------------------------------" << endl << endl;
	
	
	return 0;
}
