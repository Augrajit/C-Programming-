#include<stdio.h>
int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    else
        return n * fact(n-1);
}
int main(){
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=fact(num);
    printf("Fact is:%d",&result);
    return 0;
}