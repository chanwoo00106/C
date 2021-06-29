#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable: 4996)

void one() {
	int a, b, sum = 0;
	printf("입력 >> ");
	scanf_s("%d %d", &a, &b);
	printf("출력 >> %d ~ %d 사이의 합 : ", a, b);
	while (a <= b) {
		sum += a;
		a++;
	}
	printf("%d", sum);
}

void two() {
	int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("3의 배수이면서 7의 배수%s", a % 3 == 0 && a % 7 == 0 ? "" : " 아님");
}

void three() {
	int arr[10] = {2,4,6,8,10,};
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i));
	}
}

struct student {
	int num;
	char name[20];
	char gen[10];
};

void four() {
	struct student s1 = {1501, "홍길동", "남"};
}

void five() {
	char num[100];
	scanf("%s", num);
	if (num[7] == '1' || num[7] == '3') printf("남자");
	else if (num[7] == '2' || num[7] == '4') printf("여자");
}

void six() {
	char colors[][10] = { "Red", "Green", "Yellow", "Black", "Pink" }, temp[10];
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (colors[i][0] > colors[j][0]) {
				strcpy(temp, colors[i]);
				strcpy(colors[i], colors[j]);
				strcpy(colors[j], temp);
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", colors[i]);
	}
}

struct STUDENT {
	char school[20];
	int korean;
	int english;
	int math;
	int sum;
	double arg;
};

void seven() {
	struct STUDENT std1 = { "gsm", 68, 89, 80 };
	std1.sum = std1.english + std1.korean + std1.math;
	std1.arg = std1.sum / 3.0;
	printf("%s, %d, %d, %d, %d, %.2lf", std1.school, std1.english, std1.korean, std1.math, std1.sum, std1.arg);
}

void eight() {
	srand((unsigned)time(NULL));
	int front = 0, back = 0;
	for (int i = 0; i < 100; i++) rand() % 2 ? front++ : back++;
	printf("front : %d\nback : %d", front, back);
}

void nine() {
	int month;
	printf("달을 입력하시오 : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31일");
		break;
	case 2:
		printf("28일");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30일");
		break;
	default:
		break;
	}
}

void swap(int* x, int* y, int* z) {
	int temp;
	temp = *x;
	*x = *y;
	*y = *z;
	*z = temp;
}

int main() {
	int a = 100, b = 200, c = 300;
	swap(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}
