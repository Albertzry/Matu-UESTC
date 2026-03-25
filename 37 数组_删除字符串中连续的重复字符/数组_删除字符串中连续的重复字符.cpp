#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	char c[51];
	cin.getline(c, 50);
	int l = strlen(c);
	for (int i = 1; i < l; i++) {
		if (c[i] >= 'A' && c[i] <= 'Z' || c[i] >= 'a' && c[i] <= 'x' || c[i] >= '0' && c[i] <= '9')
			continue;
		else{
			if (c[i] == c[i - 1]) {
				for (int j = i; j < l-1; j++) {
					c[j] = c[j + 1];
				}
				c[l - 1] = '/0';
				l--;
				i--;
			}
		}
	}
	for (int i = 0; i < l; i++) {
		cout << c[i];
	}
	return 0;
}

