#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("a is big "):(b>a&&b>c)?printf("b is big"):(c>a&&c>b)?printf(" c is big"):printf("numbers are equal");
    return 0;
}