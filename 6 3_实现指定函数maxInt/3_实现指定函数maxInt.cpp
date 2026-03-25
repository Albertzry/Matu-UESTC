#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void maxInt(int* array, int n,int* result) {
    if (array == NULL || n <= 0||result==NULL) {
        printf("error");
        return;
    }
    *result = -999;
    for (int i = 0; i < n; i++) {
        if (array[i] >= *result) {
            *result = array[i];
        }
    }
    return;
}
