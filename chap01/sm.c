#include "stdio.h"

int sum_vidu(){
//int main(){
    int a, b, sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum = a + b;
    printf("The sum is: %d", sum);
    return 0;
}