#include <iostream>
#define MAX 5
using namespace std;

struct Node {
	char label = ' ';
	bool connected[MAX];
} vertex[MAX];

void addVertex(char label, int index){
	vertex[index].label = label;
	for(int i = 0; i < MAX; i++){
		vertex[index].connected[i] = 0;
	}
}

void connect(int src, int dest){
	vertex[src].connected[dest] = true;
	vertex[dest].connected[src] = true;
}

void displayVertex(){
	cout << "Data Vertex : \n";
	for(int i = 0; i < MAX; i++){
		cout << "- " << vertex[i].label << endl;
	}
}

void displayConnectivity(){
	cout << "\nKonektivitas antar vertex : \n";
	for(int i = 0; i < MAX; i++){
		cout << vertex[i].label << " : ";
		for(int j = 0; j < MAX; j++){
			if(vertex[i].connected[j]){
				cout << " " << vertex[j].label;
			}
		}
		cout << endl;
	}
}

void displayMatrix(){
	cout << "\nMatrix Adjency : \n";
	cout << " ";
	for(int i = 0; i < MAX; i++){
		cout << " " << vertex[i].label;
	}
	cout << endl;
	for(int i = 0; i < MAX; i++){
		cout << vertex[i].label << " ";
		for(int j = 0; j < MAX; j++){
			cout << (vertex[i].connected[j]? 1 : 0) << " ";
		}
		cout << endl;
	}
}

int main(){
	addVertex('A', 0);
	addVertex('B', 1);
	addVertex('C', 2);
	addVertex('D', 3);
	addVertex('E', 4);
	
	displayVertex();
	
	connect(0,2);
	connect(0,1);
	connect(2,3);
	connect(0,4);
	connect(1,4);
	
	displayConnectivity();
	displayMatrix();
	
	return 0;
}
