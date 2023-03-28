// C
#include <stdio.h>
#include <string>

// C++
#include <iostream>
#include <string>	
using namespace std;

int main(void) {
	
	char str1[50] = "Hello";
	char str2[50] = "World";

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);

	// s1_1과 s2_l중에서 작은 값을 선택
	const int l = s1_l < s2_l ? s1_l : s2_l;

	int i;
	for (i = 0; i < l; i++) {
		if (str1[i] < str2[i]) {
			printf("str2 > str1 \n");
			break;
		}
		else if (str1[i] > str2[i]) {
			printf("str1 > str2 \n");
			break;
		}
	}

	if (i == l) {
		if (s2_l > s1_l) {
			printf("str2 > str1 \n");
		}
		else if (s1_l > s2_l) {
			printf("str2 < str1 \n");
		}
		else {
			printf("str2 == str1 \n");
		}
	}

	return 0;
}