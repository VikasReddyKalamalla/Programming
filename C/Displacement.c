#include<stdio.h>
int main()
{
    int u,a,t,s;
    printf("enter u,a,t values  : ");
    scanf("%d%d%d",&u,&a,&t);
    s= u*t+a/2*t*t;
    printf("the given value or formula  is : %d ",s);
    return 0;
}