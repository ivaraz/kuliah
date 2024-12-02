#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Masukan angka : "; cin >> a;
	for (int i = 1; i * i <= a; i++){
		cout << i;
	}
	return 0;
}
