#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int ReverseArray(int array[], int size);
int swap(int* a, int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	return 0;
}


int ReverseArray(int array[], int size) {
	if (array == NULL || size <= 0) {
		return 0;
	}
	for (int i = 0; i < size / 2; i++) {
		swap(array[i], array[size - 1 - i]);
	}
	return 1;
}
