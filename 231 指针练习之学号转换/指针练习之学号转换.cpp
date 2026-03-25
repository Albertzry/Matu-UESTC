#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int fun(const char* p, int result[]);

int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "error";
		return 0;
	}
	int* p = (int*)malloc(sizeof(int) * n);
	int max=INT_MIN, maxp, min=INT_MAX, minp;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (p[i] > max) {
			max = p[i];
			maxp = i + 1;
		}
		if (p[i] < min) {
			min = p[i];
			minp = i + 1;
		}
	}
	cout << "max:" << max << ",position:" << maxp << endl;
	cout << "min:" << min << ",position:" << minp << endl;
	free(p);

	return 0;
}
int fun(const char* p, int result[]) {
	if (p == NULL||result==NULL) {
		return 0;
	}
	int i = 0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) < '0' || *(p + i) > '9') return 0;
		i++;
	}
	if (i != 13) return 0;
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
	}
	for (int i = 0; i < 4; i++) {
		result[0] = result[0] * 10 + p[i] - '0';
	}
	for (int i = 4; i < 6; i++) {
		result[1] = result[1] * 10 + p[i] - '0';
	}
	for (int i = 6; i < 10; i++) {
		result[2] = result[2] * 10 + p[i] - '0';
	}
	for (int i = 10; i < 13; i++) {
		result[3] = result[3] * 10 + p[i] - '0';
	}
	return 1;
}
