#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	struct listnode* prev;
	int data;
	struct listnode* next;
} node;

node* head = NULL;
node* tail = NULL;


int main() {
	int n;

	while (1) {
		scanf_s("%d", &n);

		if (n < 0) break;

		node* newnode = (node*)malloc(sizeof(node));
		newnode->data = n;
		newnode->prev = NULL;
		newnode->next = NULL;

		if (head == NULL) head = newnode;
		else {
			tail->next = newnode;
			newnode->prev = tail;
		}
		tail = newnode;
	}

	node* temp = tail;

	while (temp) {
		printf("%d ", temp->data);
		temp = temp->prev;
	}

	return 0;
}