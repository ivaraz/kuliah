#include <iostream>
using namespace std;

int main() {
	float angka, total, rata_rata;
	
	cout << "Masukan angka : ";
	cin >> angka;
	
	for(int i = 1; i <= angka; i++){
		cout << i << endl;
		total += i;
	}
	rata_rata = total / angka;
	cout << "Rata-rata = "<<rata_rata;
	return 0;
}
