#include <iostream>
using namespace std;

#define MAX 10

struct Tower {
    char name;
    int data[MAX];
    int top;
};

void initTower(Tower *t, char name) {
    t->name = name;
    t->top = -1;
}

void push(Tower *t, int value) {
    if (t->top < MAX - 1) {
        t->top++;
        t->data[t->top] = value;
    }
}

int pop(Tower *t) {
    if (t->top >= 0) {
        int value = t->data[t->top];
        t->top--;
        return value;
    }
    return -1;
}

void printTower(Tower *t) {
    cout << "Menara " << t->name << " : ";
    for (int i = 0; i <= t->top; i++) {
        cout << t->data[i] << " ";
    }
    cout << endl;
}

void printAllTowers(Tower *A, Tower *B, Tower *C) {
    printTower(A);
    printTower(B);
    printTower(C);
    cout << "-----------------------" << endl;
}

int step = 1;

void TOH(int n, Tower *from, Tower *to, Tower *aux, Tower *A, Tower *B, Tower *C) {
    if (n == 1) {
        int disk = pop(from);
        push(to, disk);
        cout << "Step " << step++ << endl;
        printAllTowers(A, B, C);
        return;
    }
    TOH(n - 1, from, aux, to, A, B, C);
    TOH(1, from, to, aux, A, B, C);
    TOH(n - 1, aux, to, from, A, B, C);
}

int main() {
    Tower *A = new Tower;
    Tower *B = new Tower;
    Tower *C = new Tower;

    initTower(A, 'A');
    initTower(B, 'B');
    initTower(C, 'C');

    push(A, 100);
    push(A, 75);
    push(A, 50);

    cout << "Kondisi awal:\n";
    printAllTowers(A, B, C);

    TOH(3, A, B, C, A, B, C);

    return 0;
}

