#include <iostream>
using namespace std;

int main(){
	
	int pilihan;
	
	cout << "masukan pilihan : "; cin >> pilihan;
	
//	if (pilihan == 1){
//		cout << "pilihan 1";
//	} 
//	else if(pilihan == 2){
//		cout << "pilihan 2";
//	}
//	else {
//		cout << "ini else";
//	}
	
	switch(pilihan){
		case 1:
			cout << "pilihan 1";
			break;
		case 2:
			cout << "pilihan 2";
			break;
		default:
			cout << "ini default";
	}
}
