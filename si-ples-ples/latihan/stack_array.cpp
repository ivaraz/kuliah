#include <iostream>
using namespace std;

#define maxData 5

int top = 0;
string buku[maxData];

bool isFull() {
	return top >= maxData;
}

bool isEmpty(){
	return top == 0;
}

void pushBuku(string data){
	if(isFull()){
		cout << "\nData penuh\n" << endl;
	} else {
		buku[top] = data;
		top++;
	}
}

void popBuku(){
	if(isEmpty()){
		cout << "Data Kosong!\n";
	} else {
		buku[top-1] = "";
		top--;
	}
}

void displayBuku(){
	if(isEmpty()){
		cout << "Data Kosong!\n";
	} else {
		cout << "Data stack : \n";
		for(int i = maxData - 1; i >= 0; i--){
			if(buku[i] != ""){
				cout << i << buku[i] << endl;
			}
		}
	}
	
	cout << endl;
}

void peekBuku(int posisi){
	if(isEmpty()){
		cout << "Data Kosong!\n";
	} else {
		int index = top;
		for(int i = 0; i < posisi; i++){
			index--;
		}
		cout << buku[index] << endl;
	}
}

int countBuku(){
	return top;
}

void changeBuku(string data, int posisi){
	if(isEmpty()){
		cout << "Data Kosong!\n";
	} else {
		int index = top;
		for(int i = 0; i < posisi; i++){
			index--;
		}
		buku[index] = data;
	}
}

void destroyBuku(){
	for(int i = 0; i < top; i++){
		buku[i] = "";
	}
	top = 0;
}

int main(){
//	Menambahkan Data pada Stack
	pushBuku("PBO");
	pushBuku("PWD");
	pushBuku("BASDAT");
	pushBuku("JARKOM");
	pushBuku("DATA ANALYST");
	
	displayBuku(); // Menampilkan Data
	
//	Mencoba menambahkan data ketika stack penuh
	cout << "\nPush Data.....\n";
	pushBuku("DATA WAREHOUSE");
	
	popBuku(); // Menghapus data pada stack
	
//	Menampilkan data setelah dihapus
	cout << "\nSetelah di Pop\n";
	displayBuku();
	
//	Menambahkan data baru pada posisi
//  stack yang sudah dihapus
	cout << "\nPush Data.....\n";
	pushBuku("Aljabar");
	displayBuku();
	
	cout << endl;
	
//	Pengecekan Data pada Stack
	cout << "Apakah data full? : "<< isFull() << endl;
	cout << "Apakah data kosong? : "<< isEmpty() << endl;
	
//	Menampilkan Data tertentu
	peekBuku(3);
	
//	Menampilkan banyak data
	cout << "\nBanyak Data : " << countBuku();
	
	cout << endl;
	
//	Mengganti data pada posisi tertentu
//                   data       posisi
	changeBuku("Web Development", 2);
	displayBuku();
	
//	Menghapus semua data
	cout << "\nMenghapus Semua Data!!\n";
	destroyBuku();
	
	displayBuku();
	cout << "Apakah data kosong? : "<< isEmpty() << endl;
	
}
