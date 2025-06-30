#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=7;i++){
        if(i<=4){
            for(j=1;j<=4-i;j++){
                printf(" ");

            }
            for(k=1;k<=2*i-1;k++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=i-4;j++){
                printf(" ");
            }
            for(k=1;k<=2*(8-i)-1;k++){
                printf("*");
            }
               
            }
        printf("\n");
        }
        
    }

