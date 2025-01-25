#include <iostream>
using namespace std;

void pecahan_uang(int uang), input_uang();

int main(){
	input_uang();
	return 0;
}
void pecahan_uang(int uang){
	if(uang <= 0){
		cout << "Tidak ada pecahan uang";
	} else if(uang < 100){
		cout << "Pecahan uang anda kurang dari 100";
	} else {
		int _100rb = 0, _50rb= 0, _20rb = 0, _10rb = 0, _5rb = 0, _2rb = 0, _1rb = 0, _500p = 0, _200p = 0, _100p = 0;
		
		while(uang >= 100000){
			_100rb++;
			uang -= 100000;
		}
		
		while(uang >= 50000){
			_50rb++;
			uang -= 50000;
		}
		
		while(uang >= 20000){
			_20rb++;
			uang -= 20000;
		}
		
		while(uang >= 10000){
			_10rb++;
			uang -= 10000;
		}
		
		while(uang >= 5000){
			_5rb++;
			uang -= 5000;
		}
		
		while(uang >= 2000){
			_2rb++;
			uang -= 2000;
		}
		
		while(uang >= 1000){
			_1rb++;
			uang -= 1000;
		}
		
		while(uang >= 500){
			_500p++;
			uang -= 500;
		}
		
		while(uang >= 200){
			_200p++;
			uang -= 200;
		}
		
		while(uang >= 100){
			_100p++;
			uang -= 100;
		}
		
		if(_100rb) cout << _100rb << " lembar Rp. 100.000\n";
		if(_50rb) cout << _50rb << " lembar Rp. 50.000\n";
		if(_20rb) cout << _20rb << " lembar Rp. 20.000\n";
		if(_10rb) cout << _10rb << " lembar Rp. 10.000\n";
		if(_5rb) cout << _5rb << " lembar Rp. 5.000\n";
		if(_2rb) cout << _2rb << " lembar Rp. 2.000\n";
		if(_1rb) cout << _1rb << " lembar Rp. 1.000\n";
		if(_500p) cout << _500p << " koin Rp. 500\n";
		if(_200p) cout << _200p << " koin Rp. 200\n";
		if(_100p) cout << _100p << " koin Rp. 100\n";
		if(uang) cout << "sisa Rp."<< uang << endl;
	}
}

void input_uang(){
	int uang;
	cout << "Masukan Uang : "; cin >> uang;
	pecahan_uang(uang);
}
