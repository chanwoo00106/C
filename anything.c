#include <stdio.h>
#include <stdlib.h>

void a_14() {
	int a, sum = 0;
	scanf_s("%d", &a);
	do {
		sum = sum + (a % 10);
		a = a / 10;
	} while (a > 0);
	printf("%d", sum);
}

void a_14_1() {
	int a, sum = 0;
	scanf_s("%d", &a);
	while (a > 0) {
		sum = sum + (a % 10);
		a = a / 10;
	}
	printf("%d", sum);
}

void a_15() {
	int a, cnt = 0;
	scanf_s("%d", &a);
	while (a > 0){
		a = a / 10;
		cnt++;
	}
	printf("%d", cnt);
}

void a_15_1() {
	int a, cnt = 0;
	scanf_s("%d", &a);
	do {
		a = a / 10;
		cnt++;
	} while (a > 0);
	printf("%d", a);
}

void a_16() {
	int a = 1;
	double cnt = 0, sum = 0;
	while (a != 0) {
		printf("input number >> ");
		scanf_s("%d", &a);
		sum += a;
		cnt++;
	}
	cnt--;
	printf("입력된 자료의 개수 : %.0f\n", cnt);
	printf("입력된 자료의 합계 : %.0f\n", sum);
	printf("입력된 자료의 평균 : %.2f\n", sum / cnt);
}

void a_16_1() {
	int a = 1;
	double cnt = 0, sum = 0;
	do {
		printf("input number >> ");
		scanf_s("%d", &a);
		sum += a;
		cnt++;
	} while (a != 0);
	cnt--;
	printf("입력된 자료의 개수 : %.0f\n", cnt);
	printf("입력된 자료의 합계 : %.0f\n", sum);
	printf("입력된 자료의 평균 : %.2f\n", sum / cnt);
}

void a_17() {
	int a, sum = 0, cnt = 0;
	while (1) {
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
		if (a % 2 == 0) {
			continue; // continue는 밑에 실행을 안하고 반복문 처음으로 간다
		}
		sum += a;
		cnt++;
	}
	printf("홀수 합 : %d\n", sum);
	printf("홀수 평균 : %d", sum / cnt);
}

void a_18() {
	int a;
	scanf_s("%d", &a);
	if (a < 10000) {
		printf("천의 자리 %d\n", (a / 1000) % 10);
		printf("백의 자리 %d\n", (a / 100) % 10);
		printf("십의 자리 %d\n", (a / 10) % 10);
		printf("일의 자리 %d\n", a % 10);
	}
}

void a_19() {
	int random, input, cnt = 0;
	srand(time(NULL));
	random = rand() % 100 + 1;
	
	while (1) {
		scanf_s("%d", &input);
		if (input == random) {
			printf("정답!\n");
			printf("시도횟수 : %d", cnt++);
			break;
		}
		else if (input < random) {
			printf("up\n");
			cnt++;
		}
		else {
			printf("down\n");
			cnt++;
		}
	}
}

void a_20() {
	int a;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &a);
	while (a > 0) {
		printf("%d", a % 10);
		a = a / 10;
	}
}

void test() {
	int sum = 0, a;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}
	}
}

int main() {
	test();
	return 0;
}
