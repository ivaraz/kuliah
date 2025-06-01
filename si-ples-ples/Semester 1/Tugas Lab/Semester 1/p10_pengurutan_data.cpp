#include <iostream>
using namespace std;

void sorting(string *nama, int *npm, int n ){
	for(int a = 0; a <= n; a++){
		for(int b = a+1; b < n; b++){
			if(npm[a] < npm[b]){
				int swap_npm = npm[a];
				npm[a] = npm[b];
				npm[b] = swap_npm;
				string swap_nama = nama[a];
				nama[a] = nama[b];
				nama[b] = swap_nama;
			}
		}
	}
}

void tampil(string nama[], int npm[], int n){
	for(int a = 0; a < n; a++) {
		cout << a+1 << ". "<< npm[a] << "     "
			 << nama[a] << endl;
	}
}

int main(){
	int n = 5;
	string nama[n];
	int npm[n];
	
	cout << "Masukan Data Mahasiswa\n";
	for(int a = 0; a < n; a++){
		cout << "Nama Mahasiswa ke-" << a+1 << " : "; getline(cin, nama[a]);
		cout << "NPM Mahasiswa ke-"<< a+1 << " : "; cin >> npm[a];
		cin.ignore();
		cout << endl;
	}
	cout << "Awal...\n";
	tampil(nama, npm, n);
	sorting(nama, npm, n);
	cout << "\nHasil..\n";
	tampil(nama, npm, n);
	
	return 0;
}
