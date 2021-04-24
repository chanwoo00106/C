#include <stdio.h>

void triangleLeft() {
	//*
	//**
	//***
	//****
	//*****
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void triangleRight() {
	//    *
	//   **
	//  ***
	// ****
	//*****
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void triangleRightDown() {
	//*****
	// ****
	//  ***
	//   **
	//    *
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void triangleUp() {
	//*****
	//****
	//***
	//**
	//*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void upDownTriangle() {
	//*
	//**
	//***
	//***
	//**
	//*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void downUpTriangle() {
	//***
	//**
	//*
	//*
	//**
	//***
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void pyramid() {
	//    *
	//   ***
	//  *****
	// *******
	//*********
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) { // 2 * i + 1 이게 가장 중요
			printf("*");
		}
		printf("\n");
	}
}

void triangleNum() {
	//1
	//2  3
	//4  5  6
	//7  8  9  10
	//11 12 13 14 15
	int num = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%-3d", ++num);
		}
		printf("\n");
	}
}

void triangleABC() {
	//ABCDE
	//FGHI
	//JKL
	//MN
	//O
	int num = 65;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf("%c", num++);
		}
		printf("\n");
	}
}

void hourglass() {
	//*********
	// *******
	//  *****
	//   ***
	//	  *
	//	  *
	//	 ***
	//	*****
	// *******
	//*********
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = i*2; j < 2*5-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void triangleABCnum() {
	//a1234
	//bc567
	//def89
	//ghij10
	char alphabet = 'a';
	int num = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%-3c", alphabet++);
		}
		for (int j = 0; j < 4 - i; j++) {
			printf("%-3d", ++num);
		}
		printf("\n");
	}
}

int main() {
	hourglass();
	return 0;
}
