#include <stdio.h>

void sub() {
	static int scount = 0; // static은 scount가 지역변수 이지만 안에 값을 그대로 유지를 시켜준다
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);

	scount++;
	acount++;
}

int main() {
	sub();
	sub();
	sub();
	return 0;
}
