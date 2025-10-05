#include<stdio.h>
int main(){
    int num, i, j, count = 0, maxCount = 0;
    printf("Enter the number of elements:");
    scanf("%d", &num);
    int *elm = (int*)malloc(num * sizeof(int));
    if (elm == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for (i = 0; i < num; i++) {
    for (i = 0; i < count; i++) {
        int maxCount = count;
        // You can add your logic here
    }
    free(elm);
}   for (i = 0; i < count; i++) {
        int maxCount = count;
        // You can add your logic here
    }
}