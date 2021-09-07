#include <stdio.h>

void 관리비_평균() {
	int money[3][4] = {
		{111000,125000,136000,98000},
		{136000, 142000, 112000,135000},
		{127000,133000,155000,143000}
	};
	int floor[3] = {0,0,0};
	int sum = 0;
	int row = sizeof(money) / sizeof(money[0]);
	int column = sizeof(money[0]) / sizeof(int);

	printf("row : %d\n", row);
	printf("column : %d\n", column);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			floor[i] += money[i][j];
		}
		printf("%d층의 평균 관리비는 %1.f원 입니다.\n", i + 1, floor[i] / (float)column);
		sum += floor[i];
	}

	printf("전체 평균은 %0.f원 입니다.", (float)sum / (sizeof(money) / sizeof(int)));
}

void score() {
	int score[4][4] = { 0, };// 이렇게 초기화를 안하면 쓰레기 값이 들어있다

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &score[i][j]);
			score[i][3] += score[i][j];
			score[3][j] += score[i][j];
			score[3][3] += score[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%8d", score[i][j]);
		}
		printf("\n");
	}
}

void arr() {
	int test[2][3] = { 1,2,3,4,5,6 };
	int a[2][3] = { // 행은 생략이 가능 하지만 열은 생략이 불가능 하다
		{1,2,3}
	};
	int b[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	int c[2][3] = {
		{1},
		{2,3}
	};
	printf("행 : %d\n", sizeof(test) / sizeof(test[0]));
	printf("열 : %d\n", sizeof(test[0]) / sizeof(int)); // test[0]은 한 줄을 의미함
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d", test[i][j]);
		}
		printf("\n");
	}
}

int main() {
	
	관리비_평균();
	return 0;
}
