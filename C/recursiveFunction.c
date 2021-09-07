#include <stdio.h>



int fac(int n) {//팩토리얼
	if (n == 1)
		return 1;
	else
		return n * fac(n - 1);
}

int add(int n) {// 1 ~ n까지의 합
	if (n == 1) return 1;
	else return n + add(n - 1);
}

int get_integer() {
	int n;
	printf("정수 입력 : ");
	scanf_s("%d", &n);
	return n;
}

void bin(int n){
	if(n > 0) {
		bin(n / 2);
		printf("%d", n % 2);
	}
}

int main() {
	int a = get_integer();
	printf("fac : %d\n", fac(a));
	printf("add : %d\n", add(a));
	bin(7);
	return 0;
}
