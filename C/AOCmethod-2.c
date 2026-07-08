#include<stdio.h>
int main()
{
    float radius,area;
    printf("enter the radius value : ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("Area of a circle = %f",area);
    return 0; 
}