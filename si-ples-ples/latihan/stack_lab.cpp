#include <iostream>
#include <unistd.h>
using namespace std;

#define LIMIT 5

struct Stack {
	int top;
	int *value[LIMIT];
};

void initStack(Stack *stack){
	stack->top = -1;
	memset(stack->value, 0, sizeof(stack->value));
}

bool isEmpty(Stack *stack){
	if (stack->top != - 1){
		return false;
	} else {
		return true;
	}
}

bool isFull(Stack *stack){
	if(stack->top != LIMIT -1){
		return false;
	} else {
		return true;
	}
}


void Push(Stack *stack, int value){
	if(!isFull(stack) or isEmpty(stack)){
		stack->top = stack->top + 1;
		stack->value[stack->top] = new int;
		*stack->value[stack->top] = value;
	} else {
		cout << "Stack Penuh\n";
	}
}

void display(Stack *stack){
	for(int i = LIMIT -1; i > - 1; i--){
		cout << i << " ";
		cout << stack->value[i] << " ";
		if(stack->value[i] != NULL){
			cout << *stack->value[i];
		}
		cout << endl;
	}
	
}

int Pop(Stack *stack){
	if(!isEmpty(stack) or isFull(stack)){
		int data = *stack->value[stack->top];
		delete stack->value[stack->top];
		stack->value[stack->top] = NULL;
		stack->top = stack->top -1;
		return data;
	} else {
		cout << "Stack Sudah kosong\n";
		return stack->top;
	}
}

void clearS(Stack *stack){
	while(!isEmpty(stack)){
		delete stack->value[stack->top];
		stack->value[stack->top] = NULL;
		stack->top = stack->top - 1;
	}
}

int main(){
	Stack *stack = new Stack;
	initStack(stack);
	
	int option = -1;
	while(option != 5){
		cout << "1. Input data ke stack\n";
		cout << "2. Hapus data teratas\n";
		cout << "3. Check data stack\n";
		cout << "4. Clear data stack\n";
		cout << "5. Exit\n";
		cout << "Masukan pil (1-5) : "; cin >> option;
		
		switch(option){
			case 1:{
				int data;
				cout << "Masukan data : "; cin >> data;
				Push(stack, data);
				cout << "Data "<< data << " masuk kedalam stack\n";
				break;
			}
			case 2:{
				cout << Pop(stack) << "Data teratas terhapus\n";
				break;
			}
			case 3:{
				display(stack);
				break;
			}
			case 4:{
				clearS(stack);
				break;
			}
			case 5 :{
				cout << "exit\n";
				break;
			}
		}
	}

	return 0;
}
