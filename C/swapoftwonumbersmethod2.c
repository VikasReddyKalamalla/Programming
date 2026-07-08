#include<stdio.h>
int main()
{
    int a,b , c;
    printf("enter a, b values");
    scanf("%d%d",&a,&b);
    printf("before swapping a= %d \t b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a= %d \t b= %d \n",a,b);
    return 0;
}