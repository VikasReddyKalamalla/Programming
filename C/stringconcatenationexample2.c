#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int len1,len2,i=0;
    printf("enter first string a : ");
    gets(a);
    printf("enter second string b : ");
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<=len1;i++)
    {
        a[len1+i]=b[i];
    }
    printf("%s",a);
    return 0;
}