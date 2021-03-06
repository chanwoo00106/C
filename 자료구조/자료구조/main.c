#include <stdio.h>

#define STACK_SIZE 5
int stack[STACK_SIZE];
int top = -1;

void push(int item) {
	if (top >= STACK_SIZE - 1) {
		printf("Stack is Full!\n");
		return;
	}
	else stack[++top] = item;
}

int pop() {
	if (top == -1) {
		printf("Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

int peek() {
	if (top == -1) {
		printf("Stack is Empty!!\n");
		return 0;
	}
	else return stack[top];
}

void print() {
	printf("\n-----衛濛-----\n");
	for (int i = 0; i < 5; i++) printf("弛 %d : %8d弛\n", i, stack[i]);
	printf("戌式式式式式式式式式式式式式戎\n");
	printf("top : %d\n", top);
	printf("-----諫猿-----\n");
}

int main() {
	push(10);
	push(20);
	push(30);
	push(40);
	print();
	printf("%d ", pop());
	printf("%d ", pop());
	print();
	push(50);
	push(60);
	push(70);
	print();
	return 0;
}