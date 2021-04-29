#include <stdio.h>

int isPrime(int);

int main() {
	int num, result;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);
	result = isPrime(num);
	if (result == 1) {
		printf("%d은/는 소수가 아닙니다.", num);
	}
	else {
		printf("%d은/는 소수입니다.", num);
	}
	return 0;
}

int isPrime(int a) {
	int cnt = 2;
	for (cnt; cnt < a; cnt++) {
		if (a % cnt == 0) {
			return 1;
		}
	}
	return 0;
}
