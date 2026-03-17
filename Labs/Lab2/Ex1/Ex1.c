#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Safe string input

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("\n--- Personal Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f cm\n", height);

    return 0;
}
