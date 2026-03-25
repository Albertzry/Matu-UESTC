#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Person {
	int age;
	int height;
};
void swap(Person* array, int n);


void swap(Person* array, int n) {
	int t;
	if (array == NULL || n <= 0) {
		cout << "error";
		return;
	}
	t = array[0].height;
	array[0].height = array[n - 1].height;
	array[n - 1].height = t;
	return;
}
