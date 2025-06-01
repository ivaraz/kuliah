#include <iostream>
using namespace std;

int main(){
	int first, gap, suku, deret, sigma;
	cout << "=============== Kalkulator Deret Aritmatika ===============\n";
	cout << "Masukan Angka Pertama\t\t: "; cin >> first;
	cout << "Masukan Angka Beda\t\t: "; cin >> gap;
	cout << "Masukan Jumlah Suku\t\t: "; cin >> suku;
	
	cout << "Deret\t\t\t\t: ";
	for(int i = 1; i <= suku; i++){
		deret = first + (i - 1) * gap;
		cout << deret << " ";
		sigma += deret;
	}
	cout << endl;
	cout << "Sigma N\t\t\t\t: " << sigma; 
	return 0;
}
