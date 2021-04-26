#include <stdio.h>

void print_stars() {
	printf("************************\n");
}

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}

void happyBirthday(char name[100]) {
	printf("생일축하 합니다!\n");
	printf("생일축하 합니다!\n");
	printf("사랑하는 %s의 생일축하 합니다!", name);
}

int get_Integer() {
	int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);
	return a;
}

int add(int a, int b) {
	return a + b;
}

int fac(int num) {
	int sum = 1;
	
	for (int i = 2; i <= num; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	int a;
	printf("알고 싶은 팩토리얼 값은?");
	scanf_s("%d", &a);
	int n = fac(a);
	printf("%d", n);
	return 0;
}
