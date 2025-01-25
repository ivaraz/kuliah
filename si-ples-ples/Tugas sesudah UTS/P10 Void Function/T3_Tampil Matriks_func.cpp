#include <iostream>
using namespace std;

void tampil_matriks(int arr[2][3], int b, int k), nilai_matriks(int matrik[2][3]);

int main(){
	int matriks[2][3];
	nilai_matriks(matriks);
	tampil_matriks(matriks,2,3);
	
	return 0;
}

void tampil_matriks(int arr[2][3], int b, int k){
	cout << "Matriks : \n";
	for(int i = 0; i < b; i++){
		for(int j = 0; j < k; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void nilai_matriks(int matrik[2][3]){
	int matriks[2][3] = {
							{1,2,3},
							{4,5,6}
						};
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			matrik[i][j] = matriks[i][j];
		}
	}
}
