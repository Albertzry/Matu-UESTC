#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	int n, k,m,t=0,nn=0,j=-1;
	cin >> n >> k >> m;
	if (k == 0) {
		cout << "0";
		return 0;
	}
	if (n <= 0 || k > n || k < 0 || m <= 0) {
		cout << "ERROR";
		return 0;
	}
	
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		p[i] = i + 1;
	}
	while (t != n - k) {
		j++;
		if (p[j] != 0) {
			nn++;
			if (nn == m+1) {
				p[j] = 0;
				t++;
				nn = 0;
			}
		}
		if (j == n-1) {
			j = -1;
		}

	}
	for (int i = 0; i < n; i++) {
		if (p[i] != 0) {
			cout << p[i] << ',';
		}
	}
	return 0;
}

