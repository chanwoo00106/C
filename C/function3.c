#include <stdio.h>

int isPrime(int);
int isPrime2(int);

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

void isPrime2(int a) {
	int cnt;
	for (int i = 2; i < a; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {

			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 2) printf("%d ", i);
	}

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
