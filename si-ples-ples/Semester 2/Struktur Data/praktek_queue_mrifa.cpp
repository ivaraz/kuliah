#include <iostream>
using namespace std;

#define MAX 10

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void initQueue(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Queue &q) {
    return (q.front == -1 || q.front > q.rear);
}

bool isFull(Queue &q) {
    return q.rear == MAX - 1;
}

void enqueue(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Queue penuh!" << endl;
        return;
    }

    if (isEmpty(q)) {
        q.front = 0;
    }

    q.rear++;
    q.data[q.rear] = value;
    cout << "Enqueued: " << value << endl;
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
        return;
    }

    cout << "Dequeued: " << q.data[q.front] << endl;
    q.front++;

    if (q.front > q.rear) {
        initQueue(q);
    }
}

void display(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
        return;
    }

    cout << "Isi Queue: ";
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.data[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;
    initQueue(q);

    int pilihan, nilai;

    do {
        cout << "\nMenu Queue (Array)\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Tampilkan Queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan nilai: ";
            cin >> nilai;
            enqueue(q, nilai);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            cout << "Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}

