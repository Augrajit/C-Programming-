#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int n, result;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    // Function call
    result = sum(n);

    printf("The sum of %d numbers is: %d\n", n, result);

    return 0;
}

// Function definition
int sum(int n) {
    int i, num, total = 0;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        total += num;
    }

    return total;
}
