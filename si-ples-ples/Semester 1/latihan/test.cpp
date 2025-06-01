#include <iostream>

using namespace std;

int main(){
	
	string decision;
	
	do {
		int x, y, result, select;
		
		cout << "---------------------------"<<endl;
		cout << "|   Kalkulator by Rifa    |"<<endl;
		cout << "---------------------------"<<endl;
		cout << "|     Pilih Operator      |"<<endl;
		cout << "| 1. (+) Penjumlahan      |"<<endl;
		cout << "| 2. (-) Pengurangan      |"<<endl;
		cout << "| 3. (/) Pembagian        |"<<endl;
		cout << "| 4. (x) Perkalian        |"<<endl;
		cout << "| 5. (%) Modulus          |"<<endl;
		cout << "|                         |"<<endl;
		cout << "---------------------------"<<endl;
		
		cout << "Pilih no Operator : ";
		cin >> select;
			
			switch(select) {
				case 1:
					cout << "(+) Penjumlahan"<<endl;
					cout << "masukan angka pertama : ";
					cin >> x;
					cout << "masukan angka kedua : ";
					cin >> y;
					result = x + y;
					cout << "hasil dari penjumlahan dari " << x << " + " << y << " adalah : "<< result <<endl <<endl;
					break;
				case 2:
					cout << "(-) Pengurangan"<<endl;
					cout << "masukan angka pertama : ";
					cin >> x;
					cout << "masukan angka kedua : ";
					cin >> y;
					result = x - y;
					cout << "hasil dari pengurangan dari " << x << " - " << y << " adalah : "<< result <<endl <<endl;
					break;
				case 3:
					cout << "(/) Pembagian"<<endl;
					cout << "masukan angka pertama : ";
					cin >> x;
					cout << "masukan angka kedua : ";
					cin >> y;
					result = x / y;
					cout << "hasil dari pembagian dari " << x << " / " << y << " adalah : "<< result <<endl <<endl;
					break;
				case 4:
					cout << "(x) Perkalian"<<endl;
					cout << "masukan angka pertama : ";
					cin >> x;
					cout << "masukan angka kedua : ";
					cin >> y;
					result = x * y;
					cout << "hasil dari penjumlahan dari " << x << " x " << y << " adalah : "<< result <<endl <<endl;
					break;
				case 5:
					cout << "(%) Modulus"<<endl;
					cout << "masukan angka pertama : ";
					cin >> x;
					cout << "masukan angka kedua : ";
					cin >> y;
					result = x % y;
					cout << "hasil dari modulus dari " << x << " % " << y << " adalah : "<< result <<endl <<endl;
					break;
			}
		cout << "apakah lagi? (y/t) : ";
		cin >> decision;
		cout << endl;
		
	} while (decision == "y");
	
	cout << "Program berhenti." << endl;
	return 0;
}
