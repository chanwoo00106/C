#include <stdio.h>

int main() {
	// 문자열에 문자 0을 지우면 숫자가 되고
	// 숫자에 문자 0을 넣으면 문자가 된다.
	printf("%d\n", ('8' - '0') - 1);
	printf("%c", 8 + '0');
	return 0;
}