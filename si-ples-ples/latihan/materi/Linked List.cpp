#include <iostream>
using namespace std;

// single linked list non-circular

struct Node {
	string nama;
	Node *next;
};

Node *head = NULL;
Node *tail = NULL;

int countList() {
	int count = 0;
	Node *bantu = head;
	while(bantu != NULL) {
		count++;
		bantu = bantu->next;
	}
	return count;
}

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

void pushMid(int index, string data) {
	int length = countList(); 
	
	if(index <= 0) {
		pushHead(data);
	} else if(index >= length){
		pushTail(data);
	} else {
		Node *node = new Node;
		node->data = data;
		
		Node *bantu = head;
		for(int i=0; i<index-1; i++) {
			bantu = bantu->next;
		}
		node->next = bantu->next;
		bantu->next = node;
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

void popMid(int index) {
	int length = countList(); 
	
	if(head == NULL) {
		cout << "Tidak bisa pop, tidak ada data!\n";
	} else if(index <=0) {
		popHead();
	} else if(index >= length-1){
		popTail();
	} else {
		Node *bantu = head;
		for(int i=0; i<index-1; i++){
			bantu = bantu->next;
		}
		Node *hapus = bantu->next;
		bantu->next = hapus->next;
		
		if(hapus == tail) {
			tail = bantu;
		}
		
		delete hapus;
	}
}

void clear() {
	Node *bantu = head;
	while(bantu != NULL){
		Node *hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = tail = NULL;
	cout << "Semua data telah terhapus!\n";
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
