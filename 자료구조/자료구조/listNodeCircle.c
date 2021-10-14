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

	if (input == temp->data) { // input에 값이 첫 번째 데이터를 가리킬 때
		head = head->link;
		tail->link = head;
		free(temp);
		return;
	}

	while (temp->link->data != input) { // 탐색
		if (temp->link->link == head) {
			printf("찾을 수 없습니다.\n");
			return;
		}
		temp = temp->link;
	}

	if (temp->link == head) { // head에 link가 없을 때
		head = NULL;
		return;
	}

	del = temp->link;
	temp->link = del->link;
	free(del);
}

void Sort(node* newnode) {
	node* temp = head;
	// newnode가 맨 앞에 올 때
	if (head->data > newnode->data) {
		newnode->link = head;
		head = newnode;
		return;
	}

	while (temp->link) {
		// newnode가 연결리스트 사이에 올 때
		if (temp->data <= newnode->data && temp->link->data >= newnode->data) {
			newnode->link = temp->link;
			temp->link = newnode;
			return;
		}
		temp = temp->link;
	}
	// 마지막에 올 때
	temp->link = newnode;

	tail = newnode;
	return;
}

void print() {
	if (head == NULL) printf("값이 없습니다.");

	int full, cnt = 1;
	printf("몇 번 출력? : ");
	scanf_s("%d", &full);

	node* temp = head;
	while (cnt < full) {
		temp = temp->link;
		cnt++;
	}
	printf("%d ", temp->data);
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
		//else tail->link = newnode;
		//tail = newnode;
		else Sort(newnode);
	}
	tail->link = head;// 앞이랑 끝을 연결하기

	// 삭제하는 부분
	//do {
	//	print();
	//	Delete();
	//	if (head == NULL) break;
	//	printf("계속 삭제하시겠습니까? : ");
	//	scanf_s("%d", &n);
	//	printf("\n");
	//} while (n);

	print();

	return 0;
}