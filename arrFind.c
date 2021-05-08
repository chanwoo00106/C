#include <stdio.h>

void 순차탐색() {
	int arry[10] = { 1,2,3,5,9,11 }, cnt = 0, num;
	scanf_s("%d", &num);
	for (int i = 0; i < sizeof(arry) / sizeof(int); i++) {
		if (arry[i] == num) {
			printf("값이 있음");
			cnt++;
		}
	}
	if (!cnt) printf("값이 없음");
}

void 이분탐색() {
	// 두 개로 나누는 것
	// 조건 데이터가 정렬이 되어있어야 함
	int arr[] = { 3,5,7,8,11,17,19,102,119,469 }, mid, start = 0, end, num;
	scanf_s("%d", &num);
	end = sizeof(arr) / sizeof(int) - 1;
	while (1) {
		mid = (start + end) / 2;
		if (arr[mid] == num) {
			printf("%d번 방에 값이 있음", mid);
			break;
		}
		else if (end <= start) {
			printf("값이 없음");
			break;
		}
		if (arr[mid] > num) {
			end = mid - 1;
		}
		else if (arr[mid] < num) {
			start = mid + 1;
		}
	}
}

void 배열정렬() {
	int arr[] = { 3,5,22,7,17,8,19,469,119,102 }, temp;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
			printf("%d %d\n", i, j);
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) printf("%4d", arr[i]);
}

void any() {
	char arr[4][10] = {"apple", "banana", "pineapple", "mango"};
	printf("%s ", arr[2]);
	for (int i = 0; i < 10; i++) {
		printf("%c", arr[2][i]);
	}
}

int main() {
	any();
	return 0;
}
