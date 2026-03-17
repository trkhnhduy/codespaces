#include <stdio.h>

int main() {
    int score;
    printf("Enter score (0-100): ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Grade: A\n"); // [cite: 19]
    } else if (score >= 80) {
        printf("Grade: B\n"); // [cite: 20]
    } else if (score >= 70) {
        printf("Grade: C\n"); // [cite: 21]
    } else if (score >= 60) {
        printf("Grade: D\n"); // [cite: 22]
    } else {
        printf("Grade: F\n"); // [cite: 23]
    }
    return 0;
}
