#include <stdio.h>
#include <string.h>
#pragma warning(disable :4996)

// strlen(str) : 문자열 개수
// strcpy(str, str2) : 문자열 복사
// strcat(str, str2) : 문자열 합치기
// strcmp(str,str2) : 문자열 개수가 같으면 0,  앞에가 더 크면 1,  뒤에가 더 크면 -1

int main() {
	char a[20], b[20], temp[20];
	gets(a);
	gets(b);
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
	printf("a : %s\nb : %s", a, b);
}
