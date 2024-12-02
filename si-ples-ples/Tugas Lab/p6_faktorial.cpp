#include <iostream>
using namespace std;

int main(){
	int angka, faktorial = 1;
	
	cout << "Masukan Faktorial : "; cin >> angka;
	
	int i = 1;
	while(i <= angka){
		faktorial *= i;
		i++;
	}
	cout << "Angka Faktorial dari "<< angka << " adalah : " << faktorial;
	return 0;
}
