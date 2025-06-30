#include<stdio.h>
int main(){
    int a[5],i,pos,big;
    printf("Enter the integer numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(i==0 || big<a[i]){
            big=a[i];
            pos=i+1;
        }
    }
    printf("The biggest number is %d at position %d \n",big,pos);
    return 0;
}