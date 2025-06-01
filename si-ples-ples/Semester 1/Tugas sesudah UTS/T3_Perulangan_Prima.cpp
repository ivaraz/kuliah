#include <iostream>
using namespace std;

int main(){
	int num, i, bil;
	bool bil_prima;
	
	cout << "Masukan bilangan : ";
	cin >> bil;
	
	if(bil <= 1){
		cout << bil << " bukan bilangan prima";
	}
	else {
		for(num = 2; num <= bil; num++){
			bil_prima = true;
			for(i = 2;i * i <= num; i++){
				if(num % i == 0){
					bil_prima = false;
					break;
				}
			}
			
			if(bil_prima){
				cout << num << " ";
			}
		}
	}
	

	return 0;
}
