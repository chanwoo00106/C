#include <stdio.h>

void 완전수() {
	//1. 완전수 : 자신을 제외산 양의 약들의 합으로 표현되는 양의 정수
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (i == sum) {
			printf("%d\n", i);
		}
	}
}

void 회문숫자() {
	// 회문 숫자 : 어느쪽으로 읽든지 똑같은 수(예 : 131, 2112)
	int num, sum = 0, r, temp;
	scanf_s("%d", &num);

	temp = num;
	while (num != 0) {
		r = num % 10;
		num = num / 10;
		sum = sum * 10 + r;
	}
	if (temp == sum)
		printf("회문 숫자");
	else
		printf("회문 숫자 아님");
}

void 숫자반전() {
	int num, sum = 0, r, temp;
	scanf_s("%d", &num);

	temp = num;
	while (num) {
		r = num % 10;
		num = num / 10;
		sum = sum * 10 + r;
	}
	printf("%d", sum);
}

void 숫자반전2() {
	int num;
	scanf_s("%d", &num);

	while (num) {
		printf("%d", num % 10);
		num = num / 10;
	}
}

void 암스트롱() {
	// 암스트롱 수 : 각 자리수의 3제곱의 합과 처음의 수가 같은 수
	int sum = 0, j;
	for (int i = 1; i <= 1000; i++) {
		sum = 0;
		j = i;
		while (j) {
			sum = sum + (j % 10) * (j % 10) * (j % 10);
			j = j / 10;
		}
		if (i == sum)
			printf("%d ", i);
	}
}

int main() {
	숫자반전2();
	return 0;
}
