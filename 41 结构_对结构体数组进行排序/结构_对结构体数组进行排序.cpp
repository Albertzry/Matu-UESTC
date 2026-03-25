#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Person {
	int no;
	int age;
	int height;
};
void sort(Person* array, int n);


void sort(Person* array, int n) {
	if (array == NULL || n <= 0) {
		cout << "error";
		return;
	}
	for (int i = n-1; i >=0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j].no > array[j + 1].no || array[j].no == array[j + 1].no && array[j].age > array[j + 1].age || array[j].no == array[j + 1].no && array[j].age == array[j + 1].age && array[j].height > array[j + 1].height) {
				int t;
				t = array[j].no;
				array[j].no = array[j + 1].no;
				array[j + 1].no = t;
				t = array[j].age;
				array[j].age = array[j + 1].age;
				array[j + 1].age = t;
				t = array[j].height;
				array[j].height = array[j + 1].height;
				array[j + 1].height = t;
			}
		}
	}
	return;
}
