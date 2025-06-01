#include <iostream>
using namespace std;

int main(){

	int n1,n2,n3,min,max;
	string status;
	
//	Input Bilangan
	cout << "Masukan nilai ke-1 : "; cin >> n1;
	cout << "Masukan nilai ke-2 : "; cin >> n2;
	cout << "Masukan nilai ke-3 : "; cin >> n3;
	
	cout << endl;
	
//	Pengecekan nilai Terbesar
	if (n1 >= n2 && n1 >= n3){
		max = n1;
	} else if (n2 >= n1 && n2 >= n3){
		max = n2;
	} else {
		max = n3;
	}

//  Pengecekan nilai Terkecil
	if (n1 <= n2 && n3 >= n1){
		min = n1;
	} else if (n2 <= n1 && n3 >= n2){
		min = n2;
	} else {
		min = n3;
	}
	
//  Pengecekan status Bilangan
	if (max > 0) {
		status = "Positif";
	} else {
		status = "Negatif";
	}
	
	cout << "Bilangan Terbesar adalah : "<< max << endl;
	cout << "Bilangan Terkecil adalah : "<< min << endl;
	cout << "Bilangan Terbesar adalah : "<< status;
	
	return 0;
}
