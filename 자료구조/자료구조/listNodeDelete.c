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
	printf("삭제할 숫자를 입력 : ");
	scanf_s("%d", &input);

	node* temp = head;
	node* del;

	if (input == temp->data) { // input에 값이 첫 번째 데이터를 가르킬 때
		head = head->link;
		free(temp);
		return;
	}

	while (temp->link->data != input) { // 탐색
		if (temp->link->link == NULL) {
			printf("찾을 수 없습니다.\n");
			return;
		}
		temp = temp->link;
	}

	if (temp->link == NULL) { // head에 link가 없을 때
		head = NULL;
		return;
	}

	del = temp->link;
	temp->link = del->link;
	free(del);
}

void Sort(node* newnode) {
	node* temp = head;
	if (head->data > newnode->data) {
		newnode->link = head;
		head = newnode;
		return;
	}

	while (temp->link) {
		if (temp->data <= newnode->data && temp->link->data >= newnode->data) {
			newnode->link = temp->link;
			temp->link = newnode;
			return;
		}
		temp = temp->link;
	}
	temp->link = newnode;

	tail = newnode;
	return;
}

void print() {
	if (head == NULL) printf("값이 없습니다.");

	node* temp = head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->link;
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
		else Sort(newnode); // 정렬
	}

	// 삭제하는 부분
	do {
		print();
		Delete();
		if (head == NULL) break;
		printf("계속 삭제하시겠습니까? : ");
		scanf_s("%d", &n);
		printf("\n");
	} while (n);

	print();

	return 0;
}