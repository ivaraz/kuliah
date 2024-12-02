#include <iostream>
using namespace std;

int main() {

	int i, j, baris, kolom;
	int array1[10][10], array2[10][10];
	
	cout << "Matrix ke 1\n";
	cout << "Masukan baris : "; cin >> baris;
	cout << "Masukan kolom : "; cin >> kolom;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << "Masukan angka baris ke-" << i <<" kolom ke-"<< j << " : ";	cin >> array1[i][j];
		}
	}
	
	cout << endl;
	
	cout << "Matrix ke 2\n";
	cout << "Masukan baris : "; cin >> baris;
	cout << "Masukan kolom : "; cin >> kolom;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << "Masukan angka baris ke-" << i <<" kolom ke-"<< j << " : ";	cin >> array2[i][j];
		}
	}
	cout << endl;
	
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << array1[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << array2[i][j];
		}
		cout << endl;
	}
}
