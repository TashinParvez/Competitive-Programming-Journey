#include <stdio.h>

int sum(int n);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0) {
        return n + sum(n-1);  // sum() function calls itself
                             // n+(n+(n+(......)))
    }
    else {
        return n;
    }
}
