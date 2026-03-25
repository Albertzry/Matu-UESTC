#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	float n,p1=1,p2=0,z=0,m=1,j=1;
	cin >> n;
	
	while (2*(p1 - p2) >= n) {
		p2 = p1;
		z += 1;
		m += 2;
		j *= (z / m);
		p1 += j;
	}
	
	printf("%.6f", 2*p1);
	return 0;
}
