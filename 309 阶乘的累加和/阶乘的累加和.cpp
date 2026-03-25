#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int n,r,re=0,i;
    r=scanf("%d", &n);
    if (r == 0 || n <= 0 || n > 10) {
        printf("error");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        r *= i;
        re += r;
    }
    printf("%d", re);
    
    return 0;
}
