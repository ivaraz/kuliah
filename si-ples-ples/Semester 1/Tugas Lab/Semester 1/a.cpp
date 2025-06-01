#include <iostream>
using namespace std;

int main(){
	
	int angka1 = 1;
	int angka2 = 2;
	
	//              0  1  2  3  4  5  6  7  8
//	int angka[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	cout << angka[6];
//	for(int i = 0; i < 9; i++){
//		cout << angka[i] << " ";
//	}
	int matrix[2][2] = {
		{1,2},
		{3,4}
	};
	cout << matrix[0][1];
	
	cout << endl;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << matrix[i][j];
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}
