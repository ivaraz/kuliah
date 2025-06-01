#include <iostream>
using namespace std;

struct Node {
	char data;
	Node *left = NULL;
	Node *right = NULL;
};

struct Tree{
	Node *root = NULL;
};

bool isEmpty(Node *&simpul){
	return (simpul == NULL);
}

void initTree(Node *&node, char data){
	if(isEmpty(node)){
		node = new Node;
		node->data = data;
	}
}

void preOrder(Node *root){
	if(!isEmpty(root)){
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void destroyTree(Node *&root){
	if(!isEmpty(root)){
		destroyTree(root->left);
		destroyTree(root->right);
		delete root;
		root = NULL;
	}
}


void deleteNode(Node *&root, char node) {
	if (isEmpty(root)) return;

	if (root->left && root->left->data == node) {
		destroyTree(root->left);
		root->left = NULL;
	}

	if (root->right && root->right->data == node) {
		destroyTree(root->right);
		root->right = NULL;
	}

//	deleteNode(root->left, node);
//	deleteNode(root->right, node);
}


int main(){
	Tree *pohon = new Tree;
	
	initTree(pohon->root, 'A'); // root						A
	
//	Level 1												B		C
	initTree(pohon->root->left, 'B');					
	initTree(pohon->root->right, 'C');
	
//	Level 2											D    E      F     G
	initTree(pohon->root->left->left, 'D');
	initTree(pohon->root->left->right, 'E');
	initTree(pohon->root->right->left, 'F');
	initTree(pohon->root->right->right, 'G');
	
	cout << "Init Node Tree\n";
	
	preOrder(pohon->root); // Output = A, B, D, E, C, F, G
	cout << endl << endl;
	
	cout << "Menghapus node B\n";
	
	deleteNode(pohon->root,'B');
	
	preOrder(pohon->root); // Output = A, C, F, G
	
	return 0;
}
