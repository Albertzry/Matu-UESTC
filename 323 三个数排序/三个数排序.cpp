#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return(*(int*)b - *(int*)a);
}

int main()
{
    int c[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d,", &c[i]);
    }
    qsort(c, 3, sizeof(int), cmp);
    for (int i = 0; i < 3; i++) {
        printf("%d,", c[i]);
    }
    return 0;
}
