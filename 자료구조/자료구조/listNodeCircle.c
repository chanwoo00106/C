#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	int data;
	struct listnode* link;
} node;

node* head = NULL;
node* tail = NULL;

void Delete() {
	int input;
	printf("������ ���ڸ� �Է� : ");
	scanf_s("%d", &input);

	node* temp = head;
	node* del;

	if (input == temp->data) { // input�� ���� ù ��° �����͸� ����ų ��
		head = head->link;
		tail->link = head;
		free(temp);
		return;
	}

	while (temp->link->data != input) { // Ž��
		if (temp->link->link == head) {
			printf("ã�� �� �����ϴ�.\n");
			return;
		}
		temp = temp->link;
	}

	if (temp->link == head) { // head�� link�� ���� ��
		head = NULL;
		return;
	}

	del = temp->link;
	temp->link = del->link;
	free(del);
}

void Sort(node* newnode) {
	node* temp = head;
	// newnode�� �� �տ� �� ��
	if (head->data > newnode->data) {
		newnode->link = head;
		head = newnode;
		return;
	}

	while (temp->link) {
		// newnode�� ���Ḯ��Ʈ ���̿� �� ��
		if (temp->data <= newnode->data && temp->link->data >= newnode->data) {
			newnode->link = temp->link;
			temp->link = newnode;
			return;
		}
		temp = temp->link;
	}
	// �������� �� ��
	temp->link = newnode;

	tail = newnode;
	return;
}

void print() {
	if (head == NULL) printf("���� �����ϴ�.");

	node* temp = head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->link;
		if (temp == head) break;
	}
	printf("\n");
	return;
}


int main() {
	int n;

	while (1) {
		scanf_s("%d", &n);

		if (n < 0) break;

		node* newnode = (node*)malloc(sizeof(node));
		newnode->data = n;
		newnode->link = NULL;

		if (head == NULL) head = newnode;
		else Sort(newnode);
	}
	tail->link = head;// ���̶� ���� �����ϱ�

	// �����ϴ� �κ�
	do {
		print();
		Delete();
		if (head == NULL) break;
		printf("��� �����Ͻðڽ��ϱ�? : ");
		scanf_s("%d", &n);
		printf("\n");
	} while (n);

	print();

	return 0;
}