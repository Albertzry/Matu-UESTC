#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[100], s2[100],s;
	int i = 0;
	while (s1[i-1] != '\n') {
		s1[i] = getchar();
		i++;
	}
	s1[i-1] = '\0';
	i = 0;
	while (s2[i-1] != '\n') {
		s2[i] = getchar();
		i++;
	}
	s2[i-1] = '\0';
	int n = 0;
	i = 0;
	while (s1[i] != '\0') {
		int t = 1;
		if (s1[i] == s2[0]) {
			for (int j = 0; j < strlen(s2); j++) {
				if (s1[i + j] != s2[j]) {
					t = 0;
				}
			}
			if (t == 1) {
				n++;
			}
		}
		i++;
	}
	if (n == 0) {
		printf("NO");
		return 0;
	}
	printf("%dtimes,", n);
	i = 0;
	while (s1[i] != '\0') {
		int t = 1;
		if (s1[i] == s2[0]) {
			for (int j = 0; j < strlen(s2); j++) {
				if (s1[i + j] != s2[j]) {
					t = 0;
				}
			}
			if (t == 1) {
				printf("%d,", i);
			}
		}
		i++;
	}
	return 0;
}
