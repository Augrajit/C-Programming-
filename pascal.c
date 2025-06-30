#include<stdio.h>
int main(){
    int i,j,space,value;
    for(i=1;i<=4;i++){
        for(space=1;space<=4-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i==1 || j==1){
                value=1;
            }
            else{
                value=value*(i-j+1)/(j-1);
            }
        printf("%2d",value);    
        }
    printf("\n");    
    }
    return 0;
}