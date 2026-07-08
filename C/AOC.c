#include<stdio.h>
#include<math.h>
int main()
{
    float r, area,diameter,circumference;
    printf("enter the value of radius : ");
    scanf("%f",&r);
    area = 3.14*r*r;
    diameter = 2*r;
    circumference= 2*3.14*r;
    printf("Area : %2f",area);
    printf("Diameter : %2f",diameter);
    printf("Circumference : %2f",circumference);
    return 0;
}