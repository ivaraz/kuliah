#include <iostream>
using namespace std;

void print_data(int data[], int n);
bool binary_search(int cari, int data[], int n);

int main(){
	
	int data[10] = {23,10,11,12,25,99,87,24,27,22};
	int cari;
	bool ketemu = false;
	
	cout << "Data : ";
	print_data(data,10);
	
	cout << "\nCari data : ";
	cin >> cari;
	
	ketemu = binary_search(cari, data, 10);
	
	if(ketemu == true)
		cout << cari << " ditemukan!";
	else
		cout << cari << " tidak ditemukan!";
	
	return 0;
}

void print_data(int data[], int n){
	for(int i = 0; i < n; i++){
		cout << data[i] << " ";
	}
}

bool binary_search(int cari, int data[], int n){
	bool ketemu = false;
	short awal, akhir, tengah;
	awal = 0;
	akhir = n - 1;
	
	while((ketemu == false) and (awal <= akhir)){
		tengah = (awal + akhir)/2;
		if(cari == data[tengah]){
			ketemu = true;
		} else {
			if(cari < data[tengah]){
				akhir = tengah - 1;
			} else {
				awal = tengah + 1;
			}
		}
	}
	return ketemu;
}
