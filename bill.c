#include<stdio.h>
int main(){
    int u,bill=0;
    printf("Enter the unit of electricity: ");
    scanf("%d",&u);
    if(u<=100){
        bill=u*5;
    }
    else if(u>100 && u<=200){
        bill=(100*5)+(u-100)*7;
    }
    else 
       bill=(100*5)+(100*7)+(u-300)*10;

   printf("The bill is: %d\n",bill) ;  
   return 0; 

}