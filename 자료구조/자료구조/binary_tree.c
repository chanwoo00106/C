#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	struct listnode* prev;
	int data;
	struct listnode* next;
} node;

void Insert(node* temp, int n) {
	if (temp->data < 0) {
		temp->data = n;
	}
	else if (temp->next == NULL && temp->prev == NULL) {

	}
	else {
		if (temp->data > n) Insert(temp->next, n);
		else Insert(temp->prev, n);
	}
}

void ConsoleLog(node* temp) {
	if (temp != NULL) {
		ConsoleLog(temp->prev);
		printf(temp->data);
		ConsoleLog(temp->next);
	}
}

int main() {
	node* root = (node*)malloc(sizeof(node));
	int n;

	while (1) {
		scanf_s("%d", &n);

		if (n < 0) break;
		
		Insert(&root, n);
	}

	ConsoleLog(&root);

	return 0;
}