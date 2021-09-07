#include <stdio.h>

void one() {
	int j, sum = 0;
	scanf_s("%d", &j);
	for (int i = 1; ; i++) {
		sum += i;
		if (sum > 1000) {
			printf("%d %d", i, sum);
			break;
		}
	}
}

void two() {
	int j, sum = 0, cnt = 0;
	scanf_s("%d", &j);
	for (int i = 1; ; i++) {
		if (sum >= j) {
			printf("%d %d", cnt, sum);
			break;
		}
		else if (i % 2 != 0) {
			sum += i;
			cnt++;
		}
	}
	
}

void three() {
	for (int i = 1; i <= 9; i++) {
		if (i % 3 == 0) {
			printf("%d", i);
			printf("\n");
		}
		else {
			printf("%d", i);
		}
	}
}

void four() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			printf("*   ");
		}
		printf("\n");
		printf("\n");
	}
}

void five() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void six() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
}

void seven() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

void eight() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

void nine() {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			for (int t = 1; t <= 3; t++) {
				printf("%d%d%d\n", i, j, t);
			}
		}
		
	}
}

void ten() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == j) {
				printf("[%d,%d] ", i, j);
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}

void eleven() {
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	ten();
	return 0;
}
