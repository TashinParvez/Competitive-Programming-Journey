#include <stdio.h>
#include <string.h>

// Function to find the largest odd-number substring
void find_largest_odd(char *num) {
    int n = strlen(num);

    // Traverse the string from right to left
    for (int i = n - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {  // Check if the digit is odd
            num[i + 1] = '\0';         // Truncate the string at this position
            printf("Largest odd substring: %s\n", num);
            return;
        }
    }

    // If no odd number is found
    printf("No odd number found\n");
}

int main() {
    char num1[] = "56 2222222222222";
    char num2[] = "61632424246";
    char num3[] = "616332461";

    printf("Test case 1:\n");
    find_largest_odd(num1);

    printf("\nTest case 2:\n");
    find_largest_odd(num2);

    printf("\nTest case 3:\n");
    find_largest_odd(num3);

    return 0;
}
