#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5 // define 변수명은 대문자로

void arr() {
	int num, sum = 0;
	int score[5];

	for (int i = 0; i < MAX; i++) {
		printf("%d 번째 점수를 입력해 주세요 : ", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	printf("합계 : %d", sum);
	return 0;
}

void arr2() {
	srand((unsigned)time(NULL));
	int score[MAX];
	for (int i = 0; i < 5; i++) {
		score[i] = rand() % 5 + 1;
		printf("%d번째 : %d\n", i, score[i]);
	}
}

void siz() {
	int score[] = { 1,2,3,4,5,6 };
	int siz;

	siz = sizeof(score) / sizeof(score[0]);
	for (int i = 0; i < siz; i++) {
		printf("%d", score[i]);
	}
}

int main() {
	siz();
}
