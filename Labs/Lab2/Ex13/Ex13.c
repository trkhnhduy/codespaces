#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int words = 0, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Word count: %d\n", words);
    return 0;
}
