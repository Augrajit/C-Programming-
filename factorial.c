#include<stdio.h>
int main(){
    int num, i = 1;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Error: Negative integers don't have factorial");
    else {
        while (num >= i) {
            factorial = factorial * i;
            i++;
        }
        printf("Factorial of %d is %llu", num, factorial);
    }

    return 0;
}
