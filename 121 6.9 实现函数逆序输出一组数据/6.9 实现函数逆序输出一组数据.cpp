#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void isort(int a[], int n);


void isort(int a[], int n) {
	for (int i = n - 1; i >= 1; i--) {
		cout << a[i]<<",";
	}
	cout << a[0];
	return;
}
