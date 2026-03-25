#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	double x, n,z=1,r=1,m=1;
	char c;
	cin >> x >>n;
	if (n < 0) {
		cout << "error";
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		z *= x;
		m *= i;
		r +=( z / m);
	}
	printf("%lf", r);
	return 0;
}
