#include<stdio.h>
int cube(int n){
  return n*n*n;
    
}
int main(){
    int num,temp_num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp_num=num;
    while(temp_num>0){
        int digit=temp_num%10;
        sum+=cube(digit);
        temp_num=temp_num/10;
    }
if(sum==num){
    printf("%d is an Armstrong Number",num);
   }
else
    {
    printf("%d is not a Armstrong Number",num);
}
return 0;
}