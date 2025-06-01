#include <iostream>
using namespace std;

int main(){
	int matriks[3][3];
	
	cout << "Matriks 3x3\n";
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Masukan nilai Matriks baris ke-"<<i<< " kolom ke-"<<j << " : ";
			cin >> matriks[i][j];
		}
		cout << endl;
	}
	
	matriks[0][0] = {1};
	matriks[0][1] = {1};
	matriks[0][2] = {1};
	matriks[1][0] = {1};
	matriks[0][0] = {1};
	matriks[0][0] = {1};
	matriks[0][0] = {1};
	matriks[0][0] = {1};
	matriks[0][0] = {1};
	
	cout << endl << endl;
	cout << "Nilai Matriks 3x3 : \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
