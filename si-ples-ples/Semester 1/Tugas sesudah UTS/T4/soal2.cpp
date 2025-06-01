#include <iostream>
using namespace std;

// Muhammad Rifa Maulana Aziz
// IF - D
// 5520124115

int main(){
	// mendeklarasikan variabel dan menginialisasikan variabel faktorial dengan nilai 1.0
	int n;
	long faktorial = 1.0;
	
	cout << "Masukan nilai n : "; cin >> n; // menginputkan nilai n
	
	int i = 1; // inialisasi nilai awal dari perulangan
	while(i <= n){ // pengkondisian, jika i <= n, maka
		faktorial *= i; // faktorial dikali dengan i
		i++; // iterasi untuk menambahkan nilai i
	}
	cout << "faktorial dari "<<n<<" = "<<faktorial; // mengeluarkan hasil output dari nilai n
	return 0;
}
