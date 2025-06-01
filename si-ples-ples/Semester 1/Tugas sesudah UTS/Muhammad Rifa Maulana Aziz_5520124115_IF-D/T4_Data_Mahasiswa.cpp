#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int jml, maks = 100, kolom = 4;
	float ipk, total;
	string mahasiswa[maks][kolom];
	char choice;
	
	do {
		if(jml >= maks) {
			cout << "Data sudah penuh!\n";
			break;
		}
		cout << "Masukan data mahasiswa\n";
		cout << "NIM : "; cin >> mahasiswa[jml][0]; cin.ignore();
		cout << "NAMA : "; getline(cin, mahasiswa[jml][1]); 
		cout << "JURUSAN : "; getline(cin, mahasiswa[jml][2]);
		cout << "IPK : "; cin >> mahasiswa[jml][3];
		jml++;
		cout << "apakah input sudah selesai? <y/t> : "; cin >> choice;
		cout << endl;
	} while(choice != 'y' && choice != 'Y');
	
	cout << "\t\t\t  Data Mahasiswa\n";
	cout << "=======================================================================\n";
	cout << "| " 
		 << setw(8) << "NIM" << setw(8) 
		 << "|" 
		 << setw(12) << "Nama" << setw(9)
		 << "|" 
		 << setw(13) << "Jurusan" << setw(7) 
		 << "|" 
		 << setw(7) << "IPK" << setw(5) 
		 << "|";
	cout << "\n=======================================================================\n";
	
	for(int i = 0; i < jml; i++){
		stringstream trim;
		trim << mahasiswa[i][3];
		trim >> ipk;
		total += ipk;
		
		cout << "| " 
			 << setw(8) << mahasiswa[i][0] << setw(8) 
		 	 << "|" 
		 	 << setw(12) << mahasiswa[i][1] << setw(9)
			 << "|" 
			 << setw(13) << mahasiswa[i][2] << setw(7) 
			 << "|" 
			 << setw(7) << mahasiswa[i][3] << setw(5) 
			 << "|"
			 << endl;
	}
	cout << "\n=======================================================================\n";
	cout << "Rata-rata IPK : " << total/jml;
	return 0;
}

