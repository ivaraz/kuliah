#include <iostream>
using namespace std;

class Looping {
	private:
		int i = 1, angka;
	public:
		void Input(){
			cout << "Masukan bilangan : "; cin >> angka;
		}
		
		void OddOrEven(){
			if (angka %2 == 1){
				cout << angka << " Merupakan bilangan ganjil\n";
				cout << "Berikut bilangan ganjil dari 1 sampai "<< angka << endl;
				for(i; i <= angka; i++){
					if (i %2 == 0){
						continue;
					}
					cout << i << " ";
				}
			} 
			else {
				cout << angka << " Merupakan bilangan genap\n";
				cout << "Berikut bilangan genap dari 1 sampai "<< angka << endl;
				for(i; i <= angka; i++){
					if (i %2 == 1){
						continue;
					}
					cout << i << " ";
				}
			}
		}
};

int main(){
	Looping loop;
	
	loop.Input();
	loop.OddOrEven();
	return 0;
}
