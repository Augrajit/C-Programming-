#include<stdio.h>
int main(){
    char str[50],rev[50];
    printf("Enter a string:");
    scanf("%s",&str);
    int i,j,count=0;
    while(str[count]!='\0'){
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++){
        rev[i]=str[j];
        j--;
    }
    rev[count]='\0';//For not giving any garbage value 
    
    printf("%s",&rev);
    return 0;
}
