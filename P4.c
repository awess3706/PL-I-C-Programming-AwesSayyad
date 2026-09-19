#include <stdio.h>

int main()
{
    float radius, area;
    
    printf("\nEnter the radius of the circle : ");
    scanf("%f", &radius);
    area = (3.14 * radius * radius);
    printf("\n Area of the Circle = %f", area);
    
    return 0;
}