#include <iostream>
using namespace std;

int main(){
	int array[5] = {60,75,80,55,90};
	
	cout << "Array : ";
	for(int i = 0; i < 5; i++){
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "Nilai Array lebih dari 75 : ";
	for(int j = 0; j < 5; j++){
		if(array[j] > 75){
			cout << array[j]<< " ";
		}
	}
	return 0;
}
