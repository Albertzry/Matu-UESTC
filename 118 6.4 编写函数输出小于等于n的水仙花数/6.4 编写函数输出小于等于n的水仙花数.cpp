#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int find(int n);

int find(int n){
	int num=0;
	int g, s, b;
	if (n / 100 >= 10 || n / 100 == 0) {
		return 0;
	}
	for (int i = 100; i <= n; i++) {
		b = i /100;
		s = (i / 10) % 10;
		g = i - 100 * b - 10 * s;
		if (i == b * b * b + s * s * s + g * g * g) {
			num++;
		}
	}
	return num;
}
