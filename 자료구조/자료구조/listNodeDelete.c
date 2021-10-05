#include <stdio.h>
#include <malloc.h>

typedef struct listnode {
	int data;
	struct listnode* link;
} node;

node* head = NULL;
node* tail = NULL;

void Delete(int cnt) {
	int input;
	printf("삭제할 부분을 입력 : ");
	scanf_s("%d", &input);

	if (cnt - 1 > input) { // 배열이 있는지 검사
		node* temp = head;
		node* del;
		if (input != 0) {
			while (input > 1) {
				input--;
				temp = temp->link;
			}
			del = temp->link;
			temp->link = del->link;
			free(del);
		}
		else {// 배열 맨 앞에 지우기
			head = head->link;
			free(temp);
		}
	}
	else if (cnt - 1 == input) { // 가장 끝 배열 지우기
		node* temp = head;
		while (input > 1) {
			input--;
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
		tail = temp;
	}
	else printf("삭제를 할 수 없습니다.\n");
}


int main() {
	int n = 1, cnt = 0, input;

	while (1) {
		scanf_s("%d", &n);

		if (n < 0) break;

		node* newnode = (node*)malloc(sizeof(node));
		newnode->data = n;
		newnode->link = NULL;

		if (head == NULL) head = newnode;
		else tail->link = newnode;
		tail = newnode;
		cnt++;
	}

	// 삭제하는 부분
	Delete(cnt);

	node* temp = head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->link;
	}

	return 0;
}