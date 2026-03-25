#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int* p = (int*)malloc(sizeof(int) * n);
	p[0] = 1;
	if (n >= 2) {
		p[1] = 1;
		for (int i = 2; i < n; i++) {
			p[i] = p[i - 1] + p[i - 2];
		}
	}
	cout << p[n - 1];
	free(p);
	return 0;
}
