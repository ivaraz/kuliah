#include <iostream>
using namespace std;

int main(){
	int array[100];
	int jml, i;
	float sum, avrg;
	
	cout << "Masukan jumlah array : "; cin >> jml;
	
	for(i = 0; i < jml; i++){
		cout << "Masukan nilai Array Index ke-"<<i<< " : "; cin >> array[i];
		sum += array[i];
	}
	avrg = sum / i;
	cout << "Rata-rata : " << avrg << endl;
	cout << "Array : ";
	for(i = 0; i < jml; i++){
		cout << array[i] << " ";
	}
	return 0;
}
