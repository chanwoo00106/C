#include <stdio.h>

void one() {
	int a[] = { 100,88,100,100,90 },siz ,sum = 0;
	siz = sizeof(a) / sizeof(int);
	for (int i = 0; i <= siz - 1; i++) {
		sum += a[i];
	}
	printf("%d\n", sum);
	printf("%.1f", (float)sum / (float)siz);
}

void two() {
	int a[10], siz, max;
	siz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i <= siz - 1; i++) {
		scanf_s("%d", &a[i]);
		if (i == 0) max = a[i];
		else if (a[i] > max) max = a[i];
	}
	printf("%d", max);
}

void three() {
	int max = 0, max2 = 0, a;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a);
		if (a % 2 == 0) {
			if (i == 0) max = a;
			if (max < a) max = a;
		}
		else {
			if (i == 0) max2 = a;
			if (max2 < a) max2 = a;
		}
	}
	printf("짝수 max : %d\n", max);
	printf("홀수 max : %d", max2);
}

void four() {
	int a[26];
	for (int i = 0; i < 26; i++) {
		a[i] = 'Z' - i;
		printf("%2c", a[i]);
	}
}

void five() {
	int a[100];
	for (int i = 0; i < 100; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] == 0) {
			printf("\n\n");
			for (int j = 0; j < i; j+=2) {
				printf("%3d", a[j]);
			}
			break;
		}
	}
}

void six() {
	int score[] = { 95,75,85,100,50 }, siz, temp;
	siz = sizeof(score) / sizeof(int);

	for (int i = 0; i < siz; i++) {
		for (int j = i + 1; j < siz; j++) {
			if (score[i] < score[j]) {
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}
	for (int i = 0; i < siz; i++) {
		printf("%d\n", score[i]);
	}
}

void test() {
	int arr[5], size;
	size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
	test();
	return 0;
}
