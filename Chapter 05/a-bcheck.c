#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        printf("Enter two integers: ");
        if (scanf("%d %d", &a, &b) == 2) break; // Exit loop if input is valid
        
        printf("Invalid input! Please try again.\n");
        while (getchar() != '\n'); // Clear input buffer
    }

    printf("%c\n", (a > b) ? '>' : (a < b) ? '<' : '=');

    return 0;
}
