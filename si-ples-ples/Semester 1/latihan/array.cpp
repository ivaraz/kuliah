#include <iostream>
using namespace std;

main() {
//	Array 1 Dimensi
//	int i, j, indeks;
//	int array[10];
//	
//	cout << "Masukan Indeks : "; cin >> indeks; 
//	
//	for(i = 0; i < indeks; i++){
//		cout << "Masukan angka : "; cin >> array[i];
//	}
//	cout << "[ ";
//	for(i = 0; i < indeks; i++){
//		cout << array[i]<< " ";
//	}
//	cout << "]";
	
//	Array 2 Dimensi
	int i, j, baris, kolom;
	int array[10][10];
	int arr[10][10];
	
	cout << "Matrix ke 1\n";
	cout << "Masukan baris : "; cin >> baris;
	cout << "Masukan kolom : "; cin >> kolom;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << "Masukan angka : ";	cin >> array[i][j];
		}
	}
	
	cout << endl;
	
	cout << "Matrix ke 2\n";
	cout << "Masukan baris : "; cin >> baris;
	cout << "Masukan kolom : "; cin >> kolom;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << "Masukan angka : ";	cin >> arr[i][j];
		}
	}
	cout << endl;
	
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << array[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}
