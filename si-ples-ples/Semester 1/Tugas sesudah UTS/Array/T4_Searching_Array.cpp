#include <iostream>
using namespace std;

int main(){
	int array[5] = {23,10,17,25,11};
	int cari, ketemu = 0;
	
	cout << "Array : ";
	for(int a = 0; a < 5; a++){
		cout << array[a] << " ";
	}
	cout << endl;
	
	cout << "Masukan bilangan yang dicari : "; cin >> cari;
	for(int i = 0; i <= 5; i++){
		if(array[i] == cari) {
			ketemu = 1;
			cout << "Data ditemukan di index ke-"<<i;
		}
	}
	if(ketemu == 0){
		cout << "Data tidak ditemukan!";
	}
	
	return 0;
}
