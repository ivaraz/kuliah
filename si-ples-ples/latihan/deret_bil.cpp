#include <iostream>
using namespace std;

int main(){
//	deret bilangan +=2
//	int angka = 8;
//	
//	for (int i = 0; i <= angka; i++){
//		if(i %2 == 0){
//			cout << i << " ";
//		}
//	}
	
	int angka = 100;
	cout << "Angka genap yang habis dibagi 7\n";
	for(int i = 1; i <= angka; i++){
		if(i %2 == 0){
			if(i %7 == 0){
				cout << i << " ";
			}
		}	
	}
	cout << "\nSelesai";
	cin.get();
	return 0;
}
