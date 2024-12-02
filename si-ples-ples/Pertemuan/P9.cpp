#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main(){
//	Array
//	int array1d[5] = {1,2,3,4,5};
//	int array2d[3][3] = {
//		{1, 2, 3},
//		{4, 5, 6},
//		{7, 8, 9}
//	};
//	cout << array2d[1][2];
//	
//	for(int i = 0; i < 3; i++){
//		for(int ii = 0; ii < 3; ii++){
//			cout << array2d[i][ii] << " ";
//		}
//		cout << endl;
//	}

//	int matriks_identitas[4][4];
//	
//	for(int i = 0; i < 4; i++){
//		for(int j = 0; j < 4; j++){
//			if(i == j){
//				matriks_identitas[i][j] = 1;
//			}
//			else {
//				matriks_identitas[i][j] = 0;
//			}
//			cout << matriks_identitas[i][j] << "  ";
//		}
//		cout << endl;
//	}
	int total, nilai;
	
	string mahasiswa[4][3] = {
		{"1","Budi", "75"},
		{"2","Ahmad","80"},
		{"3","Sri","95"},
		{"4","Sari","85"}
	};
	
	cout << setw(5) << left << "No"
		 << setw(20) << left << "NAMA MAHASISWA"
		 << setw(5) << left << "NILAI\n";		

	for(int i = 0; i < 4; i++){
		stringstream s;
		s << mahasiswa[i][2];
		s >> nilai;
		
		total += nilai;
		cout << setw(5) << mahasiswa[i][0] << " "
			 << setw(20) << mahasiswa[i][1] << " "
			 << setw(5) << mahasiswa[i][2] << " ";
		cout << endl;
	}
	cout << "Total nilai : "<< total << endl;
	cout << "Rata - Rata : "<< (float(total) / 4) << endl;
	
	

	
	return 0;
}
