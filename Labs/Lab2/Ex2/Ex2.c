#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer (0-255): ");
    scanf("%d", &n);

    printf("Binary form: ");
    for (int i = 7; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}
