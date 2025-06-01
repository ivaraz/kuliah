#include <iostream>
#define MAX 5
using namespace std;

struct Konser {
	string data[MAX];
	int front;
	int rear;
};

bool isEmpty(Konser *k){
	return k->front == k->rear;
}

bool isFull(Konser *k){
	return k->rear >= MAX;
}

void awalAntri(Konser *k){
	k->front = 0;
	k->rear = 0;
}

void masukAntri(Konser *k, string data){
	if(isFull(k)){
		cout << "Antrian Penuh!\n";
	} else {
		k->data[k->rear++] = data;
	}
}

void keluarAntri(Konser *k){
	if(isEmpty(k)){
		cout << "Antrian Kosong!\n";
	} else {
		k->data[k->front++];
	}
}

void tampilData(Konser *k){
	if(isEmpty(k)){
		cout << "Antrian Kosong!\n";
	} else {
		for(int i = k->front; i < k->rear; i++){
			cout << k->data[i] << " ";
		}
	}
}

int main(){
	Konser *k = new Konser;
	
	string data[MAX] = {"Ani", "Budi", "Candra", "Deni", "Elok"};
	
	awalAntri(k);
	
	for(int i = 0; i < MAX; i++){
		masukAntri(k, data[i]);
	}
	
	keluarAntri(k);
	
	tampilData(k);
	
	return 0;
}
