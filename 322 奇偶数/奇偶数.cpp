#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d", n);
    }
    else {
        printf("%d", 2 * n);
    }
   
    
    return 0;
}
