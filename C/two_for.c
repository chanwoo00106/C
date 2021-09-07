#include <stdio.h>

void 문자h까지() {
	for (int i = 0; i < 3; i++) {
		for (int j = 'a'; j <= 'z'; j++) {
			printf("%c ", j);
			if (j == 'h') break;
		}
		printf("\n");
	}
}

void 양수3개() {
	int num, sum = 0, cnt = 0;

	while (1) {
		scanf_s("%d", &num);
		if (num <= 0) {
			continue;
		}

		sum += num;
		cnt++;

		if (cnt == 3) {
			break;
		}
	}
	printf("%d", sum);
}

void 소수판별() {
	int num, cnt = 0;
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	if (cnt > 0) printf("소수 아님");
	else printf("소수");
}

void password() {
	const int pw = 1234;
	int num;
	do {
		printf("input password : ");
		scanf_s("%d", &num);
		printf("Error\n");
	} while (num != pw);
	printf("pass");
}

void 구구단() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 4; j++) {
			printf("%3d * %3d = %3d", j, i, j * i);
		}
		printf("\n");
	}
}


int main() {
	구구단();
	return 0;
}
