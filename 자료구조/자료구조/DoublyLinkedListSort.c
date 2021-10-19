#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	struct listnode* prev;
	int data;
	struct listnode* next;
} node;

node* head = NULL;
node* tail = NULL;

void Delete() {
	int input;
	printf("������ ������ : ");
	scanf_s("%d", &input);

	node* temp = head;

	if (head->data == input) {
		head = head->next;
		head->prev = NULL;
		free(temp);
		return;
	}

	if (tail->data == input) {
		tail = tail->prev;
		free(tail->next);
		tail->next = NULL;
		return;
	}

	node* del = NULL;
	while (temp->next->data != input) {
		if (temp->next->next == NULL) {
			printf("���� ã�� �� ����\n");
			return;
		}
		temp = temp->next;
	}

	del = temp->next;
	temp->next = del->next;
	del->next->prev = temp;
	free(del);
}

void Sort(node* newnode) {

	if (newnode->data <= head->data) { // ���ο� �����Ͱ� ���� ���� ��
		head->prev = newnode;
		newnode->next = head;
		head = head->prev;
	}
	else if (newnode->data >= tail->data) { // ���ο� �����Ͱ� ���� Ŭ ��
		tail->next = newnode;
		newnode->prev = tail;
		tail = tail->next;
	}
	else {
		node* temp = head;
		node* back;
		while (!(temp->data <= newnode->data && newnode->data <= temp->next->data)) temp = temp->next;

		back = temp->next;

		temp->next = newnode;
		newnode->prev = temp;
		
		back->prev = newnode;
		newnode->next = back;
	}
}

int main() {
	int n;

	while (1) {
		scanf_s("%d", &n);

		if (n < 0) break;

		node* newnode = (node*)malloc(sizeof(node));
		newnode->data = n;
		newnode->prev = NULL;
		newnode->next = NULL;

		if (head == NULL) {
			head = newnode;
			tail = newnode;
		}
		else Sort(newnode);
	}



	Delete();

	node* temp = tail;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->prev;
	}

	return 0;
}