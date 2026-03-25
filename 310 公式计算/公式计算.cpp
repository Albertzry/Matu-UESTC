#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    double n,i,f=-1;
    double r=1;
    r=scanf("%lf", &n);
    if (r == 0 || n < 0) {
        printf("error");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        r += (f  / (i * i + 1));
        f *= -1;
    }
    printf("%.4lf", r);
    
    return 0;
}
