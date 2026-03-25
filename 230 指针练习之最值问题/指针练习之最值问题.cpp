#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

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
