#include <stdio.h>

int main()
{
    int num1,num2, num3, total;
    float average;
    
    printf("\nEnter First Number : ");
    scanf("%d",&num1);
    printf("\nEnter Second Number : ");
    scanf("%d",&num2);
    printf("\nEnter Third Number : ");
    scanf("%d",&num3);
    
    total = (num1 + num2 + num3);
    average = total / 3;
    
    printf("\nAverage = %f", average);
    
    return 0;
}