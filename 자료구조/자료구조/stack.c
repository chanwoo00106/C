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

int main() {
	push('H');
	push('E');
	push('L');
	push('L');
	push('O');
	printf("%c", pop());
	printf("%c", pop());
	printf("%c", pop());
	printf("%c", pop());
	printf("%c", pop());
	return 0;
}