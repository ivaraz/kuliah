#include <iostream>
#define MAX 5
using namespace std;

struct Tumpukan {
	int top;
	string piring[MAX];
};

void awalTumpukan(Tumpukan *t){
	t->top = -1;
}

bool isEmpty(Tumpukan *t){
	return (t->top == -1);
}

bool isFull(Tumpukan *t){
	return (t->top >= MAX);
}

void tambahPiring(Tumpukan *t, string data){
	if(isFull(t)){
		cout << "Tumpukan Penuh!\n";
	} else {
		t->piring[++(t->top)] = data;
	}
}

void ambilPiring(Tumpukan *t){
	if(isEmpty(t)){
		cout << "Tumpukan Kosong!\n";
	} else {
		cout << t->piring[t->top--] << " dikeluarkan\n";
	}
}

void liatPiring(Tumpukan *t){
	if(isEmpty(t)){
		cout << "Tumpukan Kosong!\n";
	} else {
		for(int i = t->top; i >= 0; i--){
			cout << "- " << t->piring[i] << endl;
		}
	}
}

int main(){
	Tumpukan *t = new Tumpukan;
	awalTumpukan(t);
	
	tambahPiring(t, "Piring Kaca");
	tambahPiring(t, "Piring Plastik");
	
	ambilPiring(t);
	
	liatPiring(t);
	
	
	return 0;
}
