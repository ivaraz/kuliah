#include <iostream>
using namespace std;

void cetakMatriks(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void jumlahMatriks(int A[3][3], int B[3][3], int hasil[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
	int matriks_A[3][3], matriks_B[3][3], hasil[3][3];
	
	cout << "Masukan nilai Matriks A  \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "baris ke-"<<i+1<< " kolom ke-"<<j+1<< " : ";
			cin >> matriks_A[i][j];
		}		
		cout << endl;
	}
	
	cout << "Masukan nilai Matriks B  \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "baris ke-"<<i+1<< " kolom ke-"<<j+1<< " : ";
			cin >> matriks_B[i][j];
		}		
		cout << endl;
	}
	
	jumlahMatriks(matriks_A,matriks_B,hasil);
	
	cout << "Matriks A\n";
	cetakMatriks(matriks_A);
	
	cout << "Matriks B\n";
	cetakMatriks(matriks_B);
	
	cout << "hasil penjumlahan matriks A + B : \n";
	cetakMatriks(hasil);
	
	
	return 0;
}
