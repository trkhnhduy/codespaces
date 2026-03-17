#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int lower = 0, upper = 0, digits = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) lower++;
        else if (isupper(str[i])) upper++;
        else if (isdigit(str[i])) digits++;
    }
    
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d\n", digits);
    return 0;
}
