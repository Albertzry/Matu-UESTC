#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int a, b, c,max;
    scanf("%d,%d,%d", &a,&b,&c);
    max = a > b ? a : b;
    max = max > c ? max : c;
    if (max < a + b + c - max) {
        if (a == b || b == c || c == a) {
            printf("2");
        }
        else {
            printf("1");
        }
    }
    else {
        printf("0");
    }
    
    return 0;
}
