#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int a, b, max, min;
	scanf_s("%d %d", &a, &b);
	max = a > b ? a : b;
	min = a + b - max;
	int yu, be;
	for (int i = 1; i <=min; i++) {
		if (a % i == 0 && b % i == 0) {
			yu = i;
		}
	}
	for (int i = a * b; i >= max; i--) {
		if (i % a == 0 && i % b == 0) {
			be = i;
		}
	}
	printf("%d,%d", yu, be);
	return 0;
}
