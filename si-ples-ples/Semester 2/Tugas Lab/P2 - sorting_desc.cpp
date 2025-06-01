#include <iostream>
using namespace std;

void input(), bubbleSort(int arr[], int n), show(int array[], int n);

int main() {
	int arr[7];
	
	cout << "Masukan NILAI pada Array : \n";
	for(int i = 0; i < 7; i++){
		cout << "NILAI ke-" << i+1 << " : "; cin >> arr[i];
	}
	
	cout << "Sebelum diurutkan : \n";
	show(arr,7);
	
	bubbleSort(arr,7);
	
	cout << "\n\nSesudah diurutkan : \n";
	show(arr,7);
    
    return 0;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void show(int array[], int n){
	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
	}
}
