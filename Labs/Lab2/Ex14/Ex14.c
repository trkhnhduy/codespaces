#include <stdio.h>
#include <string.h>

int main() {
    char s[100], sub[50];
    
    printf("Enter string s: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Remove trailing newline
    
    printf("Enter string sub: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0; // Remove trailing newline
    
    if (strstr(s, sub) != NULL) {
        printf("The substring 'sub' EXISTS in 's'.\n");
    } else {
        printf("The substring 'sub' DOES NOT EXIST in 's'.\n");
    }
    return 0;
}
