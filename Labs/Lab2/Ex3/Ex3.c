#include <stdio.h>

int main() {
    int x, k;
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter bit position k: ");
    scanf("%d", &k);

    int bit = (x >> k) & 1;
    printf("The bit at position %d is: %d\n", k, bit);
    return 0;
}
