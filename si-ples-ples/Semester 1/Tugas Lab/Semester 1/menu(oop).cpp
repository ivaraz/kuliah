#include <iostream>
#include <math.h>
using namespace std;

// Muhammad Rifa Maulana Aziz
// IF - D
// Tugas Praktikum Lab
class Menu {
	private:
		int pilihan;
		double sisi, jariJari, tinggi, volumeKubus, luasLingkaran, volumeSilinder;
	public:
		void rumus(){
			cout << "Menu :"<< endl;
			cout << "1. Volume Kubus"<<endl;
			cout << "2. Luas Lingkaran"<<endl;
			cout << "3. Volume Silinder"<<endl<<endl;
			cout << "Inputkan pilihan anda : "; cin >> pilihan;
	
		switch(pilihan){
			case 1:
				cout << "Input sisi kubus : ";
				cin >> sisi;
				volumeKubus = pow(sisi,3.0);
				cout << "Volume Kubus : "<<volumeKubus<<"cm^3"<<endl<<endl;
				break;
			case 2:
				cout << "Inputkan jari-jari lingkaran : ";
				cin >> jariJari;
				luasLingkaran = M_PI * pow(jariJari,2.0);
				cout << "Luas Lingkaran : "<<luasLingkaran<<"cm^2"<<endl<<endl;
				break;
			case 3:
				cout << "Inputkan jari-jari silinder : ";
				cin >> jariJari;
				cout << "Inputkan tinggi : ";
				cin >> tinggi;
				volumeSilinder = M_PI * pow(jariJari,2.0) * tinggi;
				cout << "Volume Silinder : "<<volumeSilinder<<"cm^3"<<endl<<endl;
				break;
			default:
				cout << "Input Invalid !"<<endl<<endl;
				exit(0);
			}
		}
};

int main(){
	Menu menu;
	do {
		menu.rumus();
	} while(true);
}
