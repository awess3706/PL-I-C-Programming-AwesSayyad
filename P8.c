#include <stdio.h>

int main()
{
   int a,b,temp;
   
   
   printf("\n enter first number : ");
   scanf("%d",&a);
   
   printf("\n enter second number : ");
   scanf("%d",&b );
   temp = a;
   a = b;
   b = temp;
   
   printf("\n after swapping : \n");
   printf("\n first number : %d \n",a);
   printf("\n second number : %d \n",b);
    return 0;
}