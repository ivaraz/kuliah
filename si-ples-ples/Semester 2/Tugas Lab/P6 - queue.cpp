#include <iostream>
using namespace std;

#define MAX 10

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void initQueue(Queue *q) {
    q->front = q->rear = -1;
}

bool isEmpty(Queue *q) {
    return q->front == -1;
}

bool isFull(Queue *q) {
    return q->rear == MAX - 1;
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        cout << "Queue penuh.\n";
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->data[q->rear] = value;
    cout << "Data " << value << " dimasukkan ke dalam queue.\n";
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        cout << "Queue kosong, tidak bisa menghapus.\n";
        return;
    }
    cout << "Data " << q->data[q->front] << " dihapus dari queue.\n";
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
}

void display(Queue *q) {
    if (isEmpty(q)) {
        cout << "Queue kosong.\n";
        return;
    }
    cout << "Isi queue: ";
    for (int i = q->front; i <= q->rear; i++) {
        cout << q->data[i] << " ";
    }
    cout << endl;
}

void clear(Queue *q) {
    q->front = q->rear = -1;
    cout << "Queue dikosongkan.\n";
}

int main() {
    Queue *antrian = new Queue;
    initQueue(antrian);
    int pil, value;

    do {
        cout << "\n==== MENU QUEUE ====\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display Queue\n";
        cout << "4. Clear Queue\n";
        cout << "5. Exit\n";
        cout << "Pilih: ";
        cin >> pil;

        switch (pil) {
            case 1:
                cout << "Masukkan nilai: ";
                cin >> value;
                enqueue(antrian, value);
                break;
            case 2:
                dequeue(antrian);
                break;
            case 3:
                display(antrian);
                break;
            case 4:
                clear(antrian);
                break;
            case 5:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pil != 5);

    return 0;
}

