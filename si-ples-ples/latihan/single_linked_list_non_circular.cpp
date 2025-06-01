#include <iostream>
using namespace std;

// single linked list non-circular

struct Node {
	string nama;
	Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void pushHead(string value){
	Node *baru = new Node;
	baru->nama = value;
	baru->next = NULL;
	if(head == NULL){
		head = tail = baru;
	} else {
		baru->next = head;
		head = baru;
	}
}

void pushTail(string value){
	Node *baru = new Node;
	baru->nama = value;
	baru->next = NULL;
	if(head == NULL){
		head = tail = baru;
	} else {
		Node *bantu = head;
		while(bantu->next != NULL){
			bantu = bantu->next;
		}
		bantu->next = baru;
		tail = baru;
	}
}

void popHead(){
	Node *bantu = head;
	if(head == NULL){
		cout << "Tidak dapat menghapus, data kosong!\n";
	} else {
		head = head->next;
		delete bantu;
	}
}

void popTail(){
	Node *bantu = head;
	if(head == NULL){
		cout << "Tidak dapat menghapus, data kosong!\n";
	} else if(bantu->next == NULL) {
		delete bantu->next;
		head = tail = NULL;
	} else {
		Node *bantu = head;
		while(bantu->next != tail){
			bantu = bantu->next;
		}
		delete tail;
		tail = bantu;
		tail->next = NULL;
	}
}

void showData(){
	Node *bantu = head;
	if(bantu == NULL){
		cout << "DATA KOSONG!\n";
	} else {
		while(bantu != NULL){
			cout << bantu->nama << " ";
			bantu = bantu->next;
		}
	}
}



int main(){
	pushHead("Rifa");
	pushHead("Aziz");
	pushTail("Muhammad");
	popHead();
	popTail();
	showData();
	
	return 0;
}
