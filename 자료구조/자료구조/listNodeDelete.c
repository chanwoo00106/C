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
	printf("������ �κ��� �Է� : ");
	scanf_s("%d", &input);

	if (cnt - 1 > input) { // �迭�� �ִ��� �˻�
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
		else {// �迭 �� �տ� �����
			head = head->link;
			free(temp);
		}
	}
	else if (cnt - 1 == input) { // ���� �� �迭 �����
		node* temp = head;
		while (input > 1) {
			input--;
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
		tail = temp;
	}
	else printf("������ �� �� �����ϴ�.\n");
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

	// �����ϴ� �κ�
	Delete(cnt);

	node* temp = head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->link;
	}

	return 0;
}