#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double sub1(double b);
double sub2(double b);

int coin() {
	return rand() % 2 ? 1 : 0;
}

int main() {
	srand((unsigned)time(NULL));
	int a, front = 0, back = 0;
	
	for (int i = 0; i < 100; i++) {
		a = coin();
		a ? front++ : back++;
	}
	printf("앞 : %d\n뒤 : %d", front, back);
	return 0;
}

double sub1(double b) {
	return b;
}

double sub2(double b) {
	return b;
}
