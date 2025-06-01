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

void inOrder(Node *root){
	if(!isEmpty(root)){
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}

void postOrder(Node *root){
	if(!isEmpty(root)){
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
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
	
	preOrder(pohon->root); // Output = A, B, D, E, C, F, G
	
	cout << endl;
	
	inOrder(pohon->root); // Output = D, B, E, A, F, C, G
	
	cout << endl;
	
	postOrder(pohon->root); // Output = D, E, B, F, G, C, A
	
	return 0;
}
