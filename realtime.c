#include <stdio.h>

void 윤년() {
	// 윤년 구분
	int month, year;
	scanf_s("%d", &month);
	switch (month)
	{
	case 2:
		scanf_s("%d", &year);
		if (year % 4 == 0 || (year % 100 != 0 && year % 400 == 0)) {
			printf("2월의 일수는 29입니다.");
		}
		else {
			printf("2월의 일수는 28입니다.");
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d의 일수는 30일 입니다.", month);
	default:
		printf("%d의 일수는 31일 입나다.", month);
		break;
	}
	
}

void 주사위() {
	printf("주사위를 던진결과 >> ");
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a >= 4 && b >= 4) {
		printf("이겼습니다");
	}
	else if (a >= 4 || b >= 4) {
		printf("비겼습니다");
	}
	else {
		printf("졌습니다");
	}
}

void 합() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
}

void 회문() {
	int a, sum = 0, temp, r;
	scanf_s("%d", &a);
	temp = a;
	while (a) {
		r = a % 10;
		sum = sum * 10 + r;
		a = a / 10;
	}
	if (temp == sum) {
		printf("회문숫자");
	}
	else {
		printf("회문숫자 아님");
	}
}

void 문자() {
	// 엔터를 누를때까지 한 줄을 읽어 a의 개 수를 출력
	int a = 0;
	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch == 'a')
			a++;
	}
	printf("%d", a);
}

int main() {
	문자();
	return 0;
}
