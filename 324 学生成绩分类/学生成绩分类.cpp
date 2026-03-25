#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int m;
    scanf("%d", &m);
    switch (m / 10) {
    case(10):
    case(9):
        printf("A");
        break;
    case(8):
        printf("B");
        break;
    case(7):
        printf("C");
        break;
    case(6):
        printf("D");
        break;
    default:
        printf("E");
        break;
    }
    return 0;
}
