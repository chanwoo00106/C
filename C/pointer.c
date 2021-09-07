#include <stdio.h>
#include <string.h>


void pointer_arr() {
	int arr[4] = { 0,1,2,3 };
	int* ptr = arr;
	for (int i = 0; i < 4; i++) {
		printf("arr[%d] = %d, ptr[%d] = %d\n", i, arr[i], i, ptr[i]);
	}
	for (int i = 0; i < 4; i++) {
		printf("%d, %d\n", *(arr + i), *(ptr + i));
	}
}

void pointer_int() {
	int a = 5;
	int* p = &a;
	*p += 1;// 간접참조연산자
	printf("%d", a);
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *p) {
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++) {
			if (p[j] > p[j + 1]) swap(&p[j], &p[j + 1]);
		}
	}
}

int findMax(int* p) {
	int max;
	for (int i = 0; i < 5; i++) {
		if (i == 0) max = p[i];
		else if (p[i] > max) max = p[i];
	}
	return max;
}

int main() {
	// & : 주소
	// * : 값
	printf("---swap---\n");
	int a = 5, b = 10;
	swap(&a, &b);
	printf("%d %d", a, b);

	printf("\n\n---sort---\n");
	int arr[5] = { 3,7,2,6,8 };
	sort(&arr);
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n---max---\n");
	printf("max : %d", findMax(&arr));
	return 0;
}
