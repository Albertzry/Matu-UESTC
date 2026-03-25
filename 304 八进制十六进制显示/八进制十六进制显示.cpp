#include <stdio.h>
int main() {
    int numbers[] = {20, 64, 127};
int i;
    int n = sizeof(numbers) / sizeof(numbers[0]); 
    for (i = 0; i < n; i++) {
        printf("%d,", numbers[i]);
        printf("%o,", numbers[i]);
        printf("%x\n", numbers[i]);
    }
    return 0;
}
