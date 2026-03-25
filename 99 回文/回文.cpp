#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch[30];
	gets_s(ch);
	int t = 1;
	for (int i = 0; i <= (strlen(ch) / 2); i++) {
		if (ch[i] != ch[(strlen(ch) - 1 - i)]) {
			t = 0;
		}
	}
	if (t == 1) {
		printf("true");
	}
	else
		printf("false");
	return 0;
}
