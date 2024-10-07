#include <iostream>
using namespace std;

//void fungsi(string nama  = "konci", int umur = 19) {
//	cout << "Nama saya adalah : "<<nama<<" saya berumur : "<<umur<<endl;
//}
//
//int main() {
//	fungsi("rifa", 17);
//	fungsi();
//	return 0;

class Kelass {
	public:
		int nomor;
		string nama;
};

	int main(){
		Kelass obj;
		
		obj.nama = "Muhammad Rifa";
		obj.nomor = 02;
		
		cout << obj.nama<<endl;
		cout << obj.nomor;
		
		return 0;
	}


