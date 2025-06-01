#include <iostream>
using namespace std;

struct Node {
	char data;
	Node *next = NULL;
};

struct List{
	Node *head = NULL;
	Node *tail = NULL;
};

void InsertFirst(List *list, char data){
	Node *node = new Node;
	node->data = data;
	if (list->head == NULL){
		list->head = list->tail = node;
	} else {
		node->next = list->head;
		list->head = node;
	}
}

void InsertLast(List *list, char data){
	Node *node = new Node;
	node->data = data;
	if(list->head == NULL){
		list->head = list->tail = node;
	} else {
		Node *helper = list->head;
		while(helper->next != NULL){
			helper = helper->next;
		}
		helper->next = node;
		list->tail = node;
	}
}

void InsertByIndex(List *list, char data, int index){
	Node *node = new Node;
	node->data;
	if (list->head != NULL and index > 1){
		Node *helper = list->head;
		while(helper->next != NULL and index > 2){
			helper = helper->next;
			index -= 1;
		}
		list->tail = (helper->next) ? list->tail : node;
		node->next = helper->next;
		helper->next = node;
	} else {
		node->next = list->head;
		list->head = node;
		list->tail = (node->next) ? list->tail : node;
	}
}

void DeleteFirst(List *list){
	Node *helper = list->head;
	if(list->head == NULL){
		cout << "List Sudah Kosong!!\n";
	} else {
		list->head = helper->next;
		delete helper;
		helper = NULL;
	}
}

void DeleteLast(List *list){
	Node *helper = list->head;
	if (list->head == NULL){
		cout << "List Sudah Kosong!!\n";
	} else if (helper->next != NULL){
		while(helper->next != list->tail){
			helper = helper->next;
		}
		delete helper->next;
		helper->next = NULL;
		list->tail = helper;
	} else if (helper->next == NULL){
		delete helper;
		helper = NULL;
		list->head = list->tail = NULL;
	}
}

void View(List *list){
	Node *helper = list->head;
	if (helper == NULL){
		cout << "List Kosong!!\n";
	} else if (helper != NULL){
		while (helper != NULL){
			cout << helper->data << " ";
			helper = helper->next;
		}
	}
	cout << endl;
}
 
int main(){
	int option = -1;
	List *list = new List;
	while(option != 0){
		system("cls");
		View(list);
		cout << "Menu Pilihan : " << endl;
		cout << "1. Tambah simpul akhir" << endl;
		cout << "2. Hapus simpul akhir" << endl;
		cout << "3. Hapus simpul awal" << endl;
		cout << "0. Keluar Program" << endl;
		cout << "Silahkan Pilih (0-3) : "; cin >> option;
		
		switch(option){
			case 1:{
				char data;
				cout << "Masukan data : "; cin >> data;
				InsertLast(list, data);
				break;
			}
			case 2: DeleteLast(list); break;
			case 3: DeleteFirst(list); break;
		}
	}
	delete list;
	return 0;
}
