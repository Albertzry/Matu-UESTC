#include <stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	scanf_s("%d", &n);
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d,", &p[i]);
	}
	int t;
	scanf_s("%d",&t);
	int l = 0, r = n - 1;
	int m = (l + r) / 2;
	while (true) {
		if (*(p + m) == t) {
			break;
		}
		else if (*(p + m) > t) {
			r = m;
			m = (l + r) / 2;
		}
		else {
			l = m;
			m = 1+(l + r) / 2;
		}
	}
	printf_s("%d\n", m + 1);
	return 0;

}
