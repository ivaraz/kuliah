#include <iostream>
using namespace std;

void array(int arr[], int n), result();
int find_array(int array[], int n, int find);

int main(){
	result();
	return 0;
}

void array(int arr[6], int n){
	int array[6] = {23,12,11,10,21,19};
	cout << "Array : \n";
	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
		arr[i] = array[i];
	}
}

int find_array(int array[], int n, int find){
	int found;
	
	for(int ii = 0; ii <= n; ii++){
		if(array[ii] == find){
			found = 1;
			cout << "Data ditemukan pada indeks ke-"<<ii;
			break;
		}
	}
	if(found == 0){
		cout << "Data tidak ditemukan!";
	}
	return found;
}

void result(){
	int find;
	
	int arr[6];
	array(arr, 6);
	
	cout << endl;
	
	cout << "Cari nilai Array : "; 
	cin >> find;
	
	find_array(arr,6,find);
}
