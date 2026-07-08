#include<stdio.h>
int main()
{
    float p,t,r,s;
    printf("enter p,t,r values : ");
    scanf("%f%f%f",&p,&t,&r);
    s=(p*t*r)/100;
    printf("simple interest = %f",s);
    return 0;
}