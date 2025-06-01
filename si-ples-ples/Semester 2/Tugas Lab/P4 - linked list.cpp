#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

int countList(){
	int count = 0;
	Node *bantu = head;
	
	while(bantu != NULL){
		count++;
		bantu = bantu->next;
	}
	return count;
}

void pushHead(int data) {
    Node *baru = new Node;
    baru->data = data;
    baru->next = head;
	
	head = baru;
	
    if (tail == NULL) {
        tail = baru;
    }
}

void pushTail(int data){
	Node *baru = new Node;
	baru->data = data;
	baru->next = NULL;
	
	if(head == NULL){
		head = tail = baru;
	} else {
		tail->next = baru;
		tail = baru;
	}
}

void pushMid(int index, int value) {
	int length = countList();
	
	if(index <= 1){
		pushHead(value);
	} else if(index >= length){
		pushTail(value);
	} else {
		Node *baru = new Node;
		baru->data = value;
		
		Node *bantu = head;
		for(int i = 1; i < index -1; i++){
			bantu = bantu->next;
		}
		baru->next = bantu->next;
		bantu->next = baru;
		cout << "Data telah ditambahkan ditengah\n";
	}
    
}

void popHead(){
	if(head == NULL){
		cout << "Tidak dapat menghapus, data kosong!\n";
	} else {
		Node *bantu = head;
		head = head->next;
		delete bantu;
	}
}

void popTail(){
	if(head == NULL){
		cout << "Data Kosong!\n";
	} else if(head == tail){
		delete head;
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
    
    if(head == NULL){
    	cout << "Data Kosong!\n";
	} else if(index <= 0){
		popHead();
	} else if(index >= length-1){
		popTail();
	} else {
		Node *bantu = head;
		
		for(int i = 0; i < index - 1; i++){
			bantu = bantu->next;
		}
		
		Node *hapus = bantu->next;
		bantu->next = bantu->next->next;
		
		if(hapus == tail){
			tail = bantu;
		}
		delete hapus;
	}
}

void showList() {
	if(head == NULL){
		cout << "Data Kosong!\n";
	} else {
	    Node *bantu = head;
	    while (bantu != NULL) {
	        cout << bantu->data << " -> ";
	        bantu = bantu->next;
	    }
	    cout << "NULL\n";
	}
}

void clear(){
	Node *bantu = head;
	while(bantu != NULL){
		Node *hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = tail = NULL;
	cout << "Semua data telah terhapus!\n";
}

int main() {

    cout << "P4 Linked List Muhammad Rifa\n\n";
    pushHead(30);
    pushHead(20);
    pushHead(10);
    cout << "Setelah insert di depan:\n";
    showList();

    pushMid(3, 25);
    cout << "Setelah insert di posisi ke-3:\n";
    showList();

    popMid(2);
    cout << "Setelah hapus node di posisi ke-2:\n";
    showList();

    return 0;
}

