#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;
    
    rollnum = 55;
    per = 88.88;
    grade = 'A';
    
    printf("\nEnter student Roll Number : ");
    scanf("%d",&rollnum);
    
    printf("\nEnter Student Percentage : ");
    scanf("%f",&per);
    
    printf("\nEnter Student Grade : ");
    scanf("%c",&grade);
    
    
    
    printf("-----Student Information-----\n");
    printf("\nRoll Number : %d", rollnum);
    printf("\nPercentage : %f", per);
    printf("\ngrade : %c", grade);
    return 0;
}