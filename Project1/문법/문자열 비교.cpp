// C
#include <stdio.h>
#include <string>

// C++
#include <iostream>
#include <string>	
using namespace std;

int main(void) {
	// 시험 나옴
	char str1[50] = "Hello";
	char str2[50] = "World";

	// 문자열 비교 (인자의 순서와 반환값이 헷갈려)
	int result = strcmp(str1, str2);
	if (result == 0) {
		printf("str1 == str2");
	}
	if (str1 == str2) {
		cout << "str1 == str2";
	}
	else if (result == -1) {
		printf("str1 < str2");
		// str2가 str1보다 사전에 늦게 나오는 경우
	}
	else if (str1 < str2) {
		cout << "str1 < str2";
	}
	else if (result == 1) {
		printf("str1 > str2");
	} 
	else {
		cout << "str1 > str2";
	}
	return 0;
}
		

