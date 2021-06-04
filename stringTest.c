#include <stdio.h>
#include <string.h>

void findThe() {
	char str[100];
	int cnt = 0;
	gets_s(str);
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] == 't' || str[i] == 'T') && (str[i + 1] == 'h' || str[i + 1] == 'H') && (str[i + 2] == 'e' || str[i + 2] == 'E') && (str[i + 3] == ' ' || str[i + 3] == '\0')) cnt++;
	}
	printf("cnt : %d", cnt);
}

int stricmp(char *p_str, char *p_str2) {//대소문자 구분없이 두 문자열 구분
	//p_str < p_str2 = -1
	//p_str > p_str2 = 1
	//p_str == p_str2 = 0

	int cnt = 0, one = 0, two = 0;

	if (strlen(p_str) == strlen(p_str2)) { // 문자열 개수가 같을때

		for (int i = 0; i < strlen(p_str); i++) { // 문자 비교
			if (p_str[i] == p_str2[i]) cnt++; // 문자가 서로 같을때
			else if (((p_str[i] - p_str2[i]) == 32) || (p_str2[i] - p_str[i]) == 32) cnt++; //대소문자 구별 없이 서로 같을때
		}

		if (cnt == strlen(p_str)) return 0; // 문자열이 같을때

		else { // 문자열이 다르지만 수가 같을때
			for (int i = 0; i < strlen(p_str); i++) { // 아스키 코드 계산
				one += p_str[i];
				two += p_str2[i];
			}
			if (one > two) return 1; // 아스키코드 합이 앞에가 더 클때
			else return -1; // 아스키코드 합이 뒤에가 더 클때
		}
	}
	else { // 문자열의 길이가 다를때
		if (strlen(p_str) > strlen(p_str2)) { // 앞의 문자열 길이가 더 길때
			return 1;
		}
		else { // 뒤의 문자열 길이가 더 길때
			return -1;
		}
	}
}

void arrFind() {
	char color[5][10] = { "Red", "Green","Blue","Yellow","Black" };
	char str[10], answer, trash;
	int cnt = 0;
	while (1) {
		printf("input color : ");
		gets_s(str);
		for (int i = 0; i < 5; i++) {
			if (stricmp(color[i], str) == 0) {
				printf("color[%d]행에서 검색 : %s", i, str);
				cnt++;
			}
		}

		if (!cnt) printf("값이 없음\n");

		printf("\n계속할까요? (y/n) : ");
		scanf_s(" %c", &answer, 1);
		trash = getchar();

		if (answer == 'n') break;
		printf("\n");
		cnt = 0;
	}
}

int main() {
	arrFind();
	return 0;
}
