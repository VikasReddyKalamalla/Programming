#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("+ = %d \n",c);
    printf("- = %d \n",d);
    printf("* = %d \n",e);
    printf("/ = %d \n",f);
    printf("modulo = %d \n",g);
    return 0;
}