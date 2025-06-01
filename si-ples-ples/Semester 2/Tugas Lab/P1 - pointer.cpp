#include <iostream>
using namespace std;

int main(){
	int angka[7] = {1,2,3,4,5,6,7};
	
	for(int i = 0; i < 7; i++){
		cout << i << " " << &angka[i] << endl;
	}
	cout << endl;
	
	int a = 2;
	int *b = &a;
	int *c = b;
	
	cout << "nilai : " << a << endl;
	cout << "pointer a : " << *b << endl;
	cout << "pointer b : " << *c << endl;
	
	
	return 0;
}
