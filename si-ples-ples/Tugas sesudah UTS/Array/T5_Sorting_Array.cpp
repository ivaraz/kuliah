#include <iostream>
using namespace std;

int main(){
//	Nilai Array
//	Array statis
//	int array[10] = {5,1,2,7,3,9,8,10,6,4};
	
//	Array dinamis
	int n;
	int array[10];
	
	cout << "Masukan Jumlah Array : ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Masukan Nilai Array Indeks ke-" << i << " : ";
		cin >> array[i];
	}
	cout << endl;
	
	
	cout << "Array Sebelum Pengurutan : \n";
	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
	}
	cout << endl << endl;
	
	
//	Algoritma pengurutan / Sorting Algorithm
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(array[i] > array[j]){
				int swap = array[i];
				array[i] = array[j];
				array[j] = swap;
			}
		}
	}
	
//	Menampilkan Array setelah pengurutan
	cout << "Setelah Pengurutan Array : \n";
	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
	}
	return 0;
}
