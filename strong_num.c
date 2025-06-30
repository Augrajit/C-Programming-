#include<stdio.h>

int factorial(int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int num,temp_num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &temp_num);

    num=temp_num;//Have to save temp_num to a new varriable , so that temp_num can be used in another operations


    while(temp_num > 0){
        int digit = temp_num % 10;
        sum += factorial(digit);
        temp_num = temp_num / 10;
    }
    if (sum==num)
        printf("%d is a strong numger.\n", num);
    else
        printf("%d is not a strong number.\n", num);

return 0;
}   



