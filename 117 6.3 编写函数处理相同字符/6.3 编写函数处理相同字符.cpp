#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void del(char* str);
int main()
{
	char ch[100];
	gets_s(ch);
	del(ch);
	puts(ch);
	
	return 0;
}
void del(char* str) {
	int i = 0;
	char t='a';
	while (*(str + i) != '\0') {
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			i++;
		}
		else {
			if (str[i] == t) {
				int j = i;
				while (str[j] != '\0') {
					str[j] = str[j + 1];
					j++;
				}
				i--;
			}
			else
				t = str[i];
			i++;
		}
		
	}
	return;
}
