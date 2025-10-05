#include<stdio.h>
int main(){
    int i,n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        result=n*i;
        printf("%d x %d = %d \n",n,i,result);
    }
    return 0;
}