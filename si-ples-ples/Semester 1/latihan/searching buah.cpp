#include <iostream>
using namespace std;

int main(){
	int jml;
	string cari;
	bool ketemu = false;
	
	cout << "Masukan jumlah jenis buah : ";
	cin >> jml;
	
	string buah[jml];
	for(int i = 0; i < jml; i++){
		cout << "Masukan nama buah ke-"<<i+1<<" : ";
		cin >> buah[i];
	}
	cout << endl;
	
	cout << "Daftar buah : \n";
	
	for(int i = 0; i < jml; i++){
		cout << i+1 << ". " << buah[i] << endl;
	}	
 	
	cout << "\nCari nama buah : ";
	cin >> cari;
	
	for(int i = 0; i < jml; i++){
		if(cari == buah[i]){
			ketemu = true;
			cout << "Buah " << buah[i] << " Ditemukan!";
		}
	}
	
	if(ketemu == false){
		cout << "Data tidak ditemukan!";
	}
	
	return 0;
}
