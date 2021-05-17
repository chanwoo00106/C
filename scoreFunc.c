#include <stdio.h>

void score() {
	int score[4][4] = { 0, };

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

void score2(int a, int b, int c) {
	static cnt = 0, arr[4][4];
	arr[cnt][0] = a;
	arr[cnt][1] = b;
	arr[cnt][2] = c;
	for (int i = 0; i < 3; i++) {
		arr[cnt][3] += arr[cnt][i];
		arr[3][i] += arr[cnt][i];
		arr[3][3] += arr[cnt][i];
	}
	if (cnt == 2) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%5d", arr[i][j]);
			}
			printf("\n");
		}
	}
	cnt++;
}

int main() {
	int a, b, c;
	for (int i = 0; i < 3; i++) {
		scanf_s("%d %d %d", &a, &b, &c);
		score2(a, b, c);
	}
	return 0;
}
