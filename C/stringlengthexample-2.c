#include<stdio.h>
#include<string.h>
int main()
{
     int length=0,i=0;
    char a[20];
    printf("enter a name : ");
    gets(a);
    
    while(a[i]!='\0')
    {
        length++;
        i++;
    } 
    printf("%d",length);
    return 0;
}