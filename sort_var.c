#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,temp,num[10];
    float std_ved,sum=0,sumsqr=0,mean,variance =0;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("Assending order:\n");
    for(i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    mean=sum/n;
    for(i=0;i<n;i++){
        sumsqr=sumsqr+pow((num[i] - mean),2);
    }
    variance=sumsqr/n;
    std_ved=sqrt(variance);
    printf("variance is %f \n",variance);
    printf("Mean is %f \n",mean);
    printf("Standard deviation is %f \n",std_ved);
    
    return 0;
}