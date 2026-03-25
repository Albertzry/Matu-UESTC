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
	int a=0, d=0;
	for (int i = 0; i < strlen(c); i++) {
		switch (c[i]) {
		case('a'):a++;
			break;
		case('d'):d++;
			break;
		default:continue;
		}
	}
	cout << "a:" << a << ",d:" << d;
	return 0;
}
