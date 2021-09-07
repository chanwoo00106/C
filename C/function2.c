#include <stdio.h>

void menu() {
	printf("'c'섭씨온도에서 화씨온도로 변환\n");
	printf("'f'화씨온도에서 섭씨온도로 변환\n");
	printf("'q'종료\n");
}

double f2c(double a) {
	return 9.0 / 5.0 * a + 32;
}

double c2f(double a) {
	return (a - 32.0) * 5.0 / 9.0;
}


int main() {
	while (1) {
		char ch;
		double num;
		menu();
		printf("메뉴를 선택하세요 : ");
		ch = getchar();
		switch (ch)
		{
		case 'c':
			printf("섭씨온도 : ");
			scanf_s("%lf", &num);
			printf("화씨온도 : %lf\n", f2c(num));
			getchar();
			break;
		case 'f':
			printf("화씨온도 : ");
			scanf_s("%lf", &num);
			printf("섭씨온도 : %lf\n", c2f(num));
			getchar();
			break;
		case 'q':
			goto A;
			break;
		default:
			printf("잘못 입력하셨습니다\n");
		}
	}
	A:
	return 0;
}
