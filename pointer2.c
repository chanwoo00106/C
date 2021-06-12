#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strl(const char a[]){
	int i = 0;
	while (a[i] != '\0') {
		i++;
	}
	return i;
}

void sreverse(char* str, int num) {
	char temp;
	num--;
	for (int i = 0; i <= num / 2; i++) {
		temp = str[num];
		str[num] = str[i];
		str[i] = temp;
		num--;
	}
}


int main() {
	int* x, * y;
	x = (int*)malloc(sizeof(int));
	*x = 42;
	printf("%d\n", *x);
	y = x;
	*y = 13;
	printf("%d %d\n", *x, *y);
	free(x);

	//int 자료형 3개 저장할 수 있는 list
	int* list = (int*)malloc(sizeof(int) * 3);
	if (list == NULL) printf("메모리할당 실패");
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	for (int i = 0; i < 3; i++) {
		printf("%d ", list[i]);
	}

	printf("\n");
	// 배열의 크기를 4로 늘리고 4저장하기
	int* temp = (int*)malloc(sizeof(int) * 4);
	for (int i = 0; i < 3; i++) {
		temp[i] = list[i];
	}
	temp[3] = 4;
	free(list);
	list = temp;
	for (int i = 0; i < 4; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}
