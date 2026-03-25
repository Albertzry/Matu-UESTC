#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int cmp(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}
int main()
{
	int n[10];
	for (int i = 0; i < 10; i++) {
		cin >>n[i];
	}
	qsort(n, 10, sizeof(int), cmp);
	for (int i = 0; i < 9; i++) {
		cout << n[i] << ',';
	}
	cout << n[9];
	return 0;
}
