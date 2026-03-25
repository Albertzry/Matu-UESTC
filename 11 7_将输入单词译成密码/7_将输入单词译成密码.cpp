#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	char c[21];
	int i = 0;
	while (i < 20) {
		c[i] = getchar();
		if (c[i] == '\n') {
			break;
		}
		if (c[i] < 'A' || c[i]>'Z' && c[i] < 'a' || c[i]>'z') {
			cout << "error";
			return 0;
		}
		i++;
	}
	c[i] = '\0';

	for (int i = 0; i < strlen(c); i++) {
		if (c[i] >= 'a' && c[i] <= 'v' || c[i] >= 'A' && c[i] <= 'V') {
			c[i] += 4;
		}
		else {
			c[i] -= 'w' - 'a';
		}
		cout << c[i];
	}

	return 0;
}
