#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;



int main()
{
	for (int i = 100; i <= 200; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			continue;
		}
		else {
			cout << i;
		}
	}
	return 0;
}
