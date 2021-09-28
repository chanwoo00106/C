#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	int data;
	struct listnode* link;
} node;


int main() {
	node* head = NULL;
	node* tail = NULL;
	node* newnode = (node*)malloc(sizeof(node));

	newnode->data = 10;
	newnode->link = NULL;

	if (head == NULL) {
		head = newnode;
		tail = newnode;
	}
	printf("node");
	return 0;
}