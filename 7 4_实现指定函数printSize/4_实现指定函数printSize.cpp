#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


void printSize(int* first, int* last) {
    if (first == NULL || last==NULL || last - first <= 0) {
        printf("error\n");
        return;
    }
    int i = 0;
    while ((first + i) != last) {
        i++;
    }
    printf("%d,%d\n", i+1, 4 * (i+1));
    return;
}
