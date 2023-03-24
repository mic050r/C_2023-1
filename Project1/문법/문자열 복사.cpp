#include <stdio.h>
#include <string.h>	// 문자열 함수가 들어있음

int main(void) {
	char str1[30] = "";
	char str2[30] = "JiHyeon";

	for (int i = 0; str2[i] != '\0'; i++) {
		str1[i] = str2[i];
	}
	// str1에 str2의 내용을 집어넣겠다
	strcpy(str1, str2);
	printf("%s \n", str1);

	return 0;
}