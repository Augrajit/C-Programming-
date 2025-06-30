#include<stdio.h>
int main(){
    int num,temp_num,reversed=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp_num=num;
    while(temp_num>0){
        int digit=temp_num%10;
        reversed=reversed*10+digit;
        temp_num=temp_num/10;
    }
if(num==reversed){
    printf("%d is a palindrome",num);
}
else{
    printf("Not a palindrome");
}
}