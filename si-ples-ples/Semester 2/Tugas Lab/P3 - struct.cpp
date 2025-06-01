#include <iostream>
using namespace std;

struct Data {
	string nama;
	int tb, umur;
	string goldar;
	bool isFilled;
	
	void tampil(){
		int pil;
		do {
			cout << "=======MENU=======\n"
				 << "1. Input Data\n"
			     << "2. Output Data\n"
			     << "0. Keluar Program\n"
			     << "==================\n"
			     << "\nMasukan Pilihanmu : "; cin >> pil;
			switch(pil){
				case 1:{
					cout << "\nINPUT DATA\n";
					cout << "Nama\t\t: "; cin.ignore(); getline(cin, nama);
					cout << "Tinggi Badan    : "; cin >> tb;
					cout << "Umur\t\t: "; cin >> umur;
					cout << "Golongan Darah  : "; cin >> goldar;
					isFilled = true;
					cout << endl;
					break;
				}
				case 2:{
					if(!isFilled){
						cout << "DATA KOSONG!\n\n";
					} else {
						cout << "\nOUTPUT DATA\n";
						cout << "Nama\t\t: " << nama << endl;
						cout << "Tinggi Badan    : " << tb << " cm" << endl;
						cout << "Umur\t\t: " << umur << " tahun" << endl;
						cout << "Golongan Darah  : " << goldar << endl << endl;
					}
					break;
				}
				case 0:{
					cout << "Bye Bye!";
					exit(0);
					break;
				}
				default:{
					cout << "Input Invalid!\n\n";
					break;
				}	
			}
		} while(pil != 0);
	}
};

int main(){
	Data *dt = new Data();
	dt->tampil();
	
	return 0;
}
