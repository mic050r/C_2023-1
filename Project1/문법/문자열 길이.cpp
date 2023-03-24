// C
#include <stdio.h>
#include <string>

// C++
#include <iostream>
#include <string>	

int main(void) {

	char str1[30] = "Jihyeon";
	int len = 0;

	for (int i = 0; str1[i] != '\0'; i++) {
		len++;
	}
	printf("문자열의 길이는 %d \n", len);
}