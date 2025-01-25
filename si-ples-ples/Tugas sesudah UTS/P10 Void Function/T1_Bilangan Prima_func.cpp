#include <iostream>
using namespace std;

int bilangan_prima();
void input_bilangan();

int main(){
	input_bilangan();
	return 0;
}

int bilangan_prima(int bilangan){
	bool dec, isPrime = true;

	if(bilangan <= 1){
		isPrime = false;
	}
	else {
		for(int i = 2; i * i <= bilangan; i++){
			if(bilangan % i == 0){
				isPrime = false;
				break;
			}
		}	
	}
	
	dec = (isPrime) ? cout << bilangan << " adalah bilangan prima!" : cout << bilangan << " bukan bilangan prima!";
	
	return dec;
}

void input_bilangan(){
	int bil;
	cout << "Masukan Bilangan : "; cin >> bil;
	bilangan_prima(bil);
}

