#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int ukuran = 9; // 9x9
	
	cout << "\tTabel perkalian\n\n";
	
	cout << setw(8) << "*" << setw(8);
	for(int i = 1; i <= ukuran; i++){
		cout << setw(8) << i;
	}
	cout << endl << endl;
	
	for(int j = 1; j <= ukuran; j++){
		cout << setw(8) << j;
		for(int k = 1; k <= ukuran; k++){
			cout << setw(8) << j * k;
		}
		cout << endl << endl;
	}
	return 0;
}
