#include <iostream>
using namespace std;

int main(){
	int array[100];
	int jml, nilai;
	
	cout << "Masukan Jumlah Array : "; cin >> jml;
	
	for(int i = 0; i < jml; i++){
		cout << "Masukan Nilai pada Array Index ke-"<<i<<" : "; cin >> array[i];
		nilai+=array[i];
	}
	
	cout << "Total Nilai : " << nilai << endl;
	cout << "Array : ";
	for(int i = 0; i < jml; i++){
		cout << array[i] << " ";
	}
	
	return 0;
}
