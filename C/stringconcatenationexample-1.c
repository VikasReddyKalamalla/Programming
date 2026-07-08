/**/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],i=0;
    printf("enter first string a : ");
    gets(a);
    printf("enter second string b : ");
    gets(b);
    strcat(a,b);
    printf("%s",a);
    return 0;



}