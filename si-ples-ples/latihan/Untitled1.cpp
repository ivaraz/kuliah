#include <iostream>
#include <math.h>
using namespace std;

class Menu {
	private:
		int pilih;
		double sisi, jariJari, tinggi, volumeKubus, luasLingkaran, volumeSilinder;
	public:
		void Pilih(){
			do{
			cout << "1. Menghitung Volume Kubus"<<endl;
			cout << "2. Menghitung Keliling Lingkaran"<<endl;
			cout << "3. Menghitung Volume Silinder"<<endl;
			cout << "4. Exit"<<endl;
			cout << "Pilih Operasi : "; cin >> pilih;
	
				switch(pilih){
					case 1:
						Kubus();
						break;
					case 2:
						Lingkaran();
						break;
					case 3:
						Silinder();
						break;
					case 4:
						exit(0);
					default:
						cout <<"Operasi yang anda input tidak ada!";
				}
			} while(pilih != 4);
			
		}
		
		void Kubus(){
			cout << "Input sisi kubus : ";
			cin >> sisi;
			volumeKubus = pow(sisi,3.0);
			cout << "Volume Kubus : "<<volumeKubus<<"cm^3"<<endl<<endl;
		}
		
		void Lingkaran(){
			cout << "Inputkan jari-jari lingkaran : ";
			cin >> jariJari;
			luasLingkaran = M_PI * pow(jariJari,2.0);
			cout << "Luas Lingkaran : "<<luasLingkaran<<"cm^2"<<endl<<endl;
		}
		void Silinder(){
			cout << "Inputkan jari-jari silinder : ";
			cin >> jariJari;
			cout << "Inputkan tinggi : ";
			cin >> tinggi;
			volumeSilinder = M_PI * pow(jariJari,2.0) * tinggi;
			cout << "Volume Silinder : "<<volumeSilinder<<"cm^3"<<endl<<endl;
		}
};


int main() {
	Menu menu;
	menu.Pilih();
}
