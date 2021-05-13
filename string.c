#include <stdio.h>

void string2() {
	char s[3][6] = {
		"init",
		"open",
		"close"
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; s[i][j] != '\0'; j++) {
			printf("%c", s[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		printf("%s", s[i]);
		printf("\n");
	}
}

void arrCopy() {
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열 : %s\n", src);
	for (i = 0; src[i] != '\0'; i++) {
		dst[i] = src[i];
	}
	dst[i] = '\0';
	printf("문자열 길이 : %d\n", i);
	printf("복사된 문자열 : %s", dst);
}

void string() {
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	char str2[6] = "Seoul";
	char str3[3] = { 'i', 's', '\0' };
	char str4[] = "the capital city of Korea";

	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
	printf("%s\n", str);
	printf("%s %s %s", str2, str3, str4);
}

int main() {
	string2();
	return 0;
}
