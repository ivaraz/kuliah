#include <iostream>
using namespace std;

int main(){
	double jmlBelanja, diskon, totalBayar;
	
	cout << "Masukan nominal belanja : "; cin >> jmlBelanja;
	
	if(jmlBelanja > 100000){
		diskon = jmlBelanja * 0.1;
	} else {
		diskon = 0;
	}
	
	cout << "Anda mendapatkan diskon : "<< diskon << endl;
	
	totalBayar = jmlBelanja - diskon;
	cout << "Total Bayar : "<< totalBayar;
	return 0;
}
