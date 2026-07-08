#include<stdio.h>
int main()
{
    int n ;
    printf("enter n value");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("you are eligible for vote");

    }
    else{
    printf("you are not eligible for vote");
    }
    return 0;
}