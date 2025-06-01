#include <iostream>
#include <cmath>
using namespace std;

int luasTabung(), volumeTabung();
void main_function();

int main(){
	main_function();
	return 0;
}

int luasTabung(int j, int t){
	int L = 2 * 3.14 * j * (j+t);
	cout << "Rumus\t\t\t: 2*phi*r*(r+t)\n";
	cout << "Luas permukaan tabung\t: " << L;
}

int volumeTabung(int j, int t){
	int V = 3.14 * j * j * t;
	cout << "Rumus\t\t\t: phi*r*r*t\n";
	cout << "Volume Tabung\t\t: " << V;
}

void main_function(){
	int jariJari,tinggi,pil;
	
	cout << "Inputkan jari-jari\t: "; cin >> jariJari;
	cout << "Inputkan tinggi\t\t: "; cin >> tinggi;
	cout << "1. Luas Permukaan Tabung\n";
	cout << "2. Volume Tabung\n";
	cout << "Inputkan <1-2>\t\t: "; cin >> pil;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	switch(pil){
		case 1:{
			luasTabung(jariJari,tinggi);
			break;
		}
		case 2:{
			volumeTabung(jariJari,tinggi);
			break;
		}
		default:
			cout << "Input Invalid!";
	}
}

