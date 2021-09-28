#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	int data;
	struct listnode* link;
} node;


int main() {
	node* head = NULL;
	node* tail = NULL;
	int n = 1;

	while (1) {	
		scanf_s("%d", &n);

		if (n < 0) break;

		node* newnode = (node*)malloc(sizeof(node));
		newnode->data = n;
		newnode->link = NULL;

		if (head == NULL) head = newnode;
		else tail->link = newnode;
		tail = newnode;

	}

	node* temp = head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->link;
	}

	return 0;
}