#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value to find x: ");
    scanf("%d", &x);
    
    printf("Indices found: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
    
    return 0;
}
