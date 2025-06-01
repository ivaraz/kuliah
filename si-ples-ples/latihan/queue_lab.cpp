#include <iostream>
using namespace std;

#define MAX 5

struct Queue {
	int data[MAX];
	int front;
	int rear;
};

void init(Queue *q){
	q->front = 0;
	q->rear = 0;
}

bool isEmpty(Queue *q){
	return q->front == q->rear;
}

bool isFull(Queue *q){
	return q->rear == MAX;
}

void enqueue(Queue *q, int value){
	if(isFull(q)){
		cout << "Queue Penuh" << endl;
	} else {
		q->data[q->rear++] = value;
		cout << value << " berhasil ditambahkan" << endl;
	}
}

void dequeue(Queue *q){
	if(isEmpty(q)){
		cout << "Antrian kosong\n";
	} else {
		cout << "antrian " << q->data[q->front++] << " dihapus dari antrian\n"; 
	}
}

void display(Queue *q){
	if(isEmpty(q)){
		cout << "Queue kosong\n";
	} else {
		cout << "Data Queue\n";
		for(int i = q->front; i < q->rear; i++){
			cout << q->data[i] << endl;
		}
		cout << endl;
	}
}

void retrieve(Queue *q){
	if(isEmpty(q)){
		cout << "Data Kosong\n";
	} else {
		cout << "Antrian pertama "<< q->data[q->front] << endl;
	}
}

void clear(Queue *q){
	q->front = 0;
	q->rear = 0;
	cout << "Semua data telah dihapus\n";
}

int main(){
	Queue *q1 = new Queue;
	init(q1);
	
	enqueue(q1, 10);
	enqueue(q1, 20);
	enqueue(q1, 30);
	
	display(q1);
	
	dequeue(q1);
	display(q1);
	
	retrieve(q1);
	
	clear(q1);
	display(q1);
	
	return 0;
}
