#include <iostream>
using namespace std;

void pangkat(int a, int n) {
	int hasil = 1;
	
	for(int i = 0; i < n; i++){
		hasil *= a;
	}
	cout << hasil;
}

main(){
	int a,n;
	
	cout << "Masukan angka\t\t: "; cin >> a;
	cout << "Masukan jumlah pangkat  : "; cin >> n;
	cout << "Hasilnya adalah ";
	pangkat(a, n);
	
	return 0;
}
