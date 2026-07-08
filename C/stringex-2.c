/**/

#include<stdio.h>
int main()
{
    char a[20];
    printf("enter a name : ");
    gets(a);
    printf("%s",&a[20]);
  // puts(a);
    //puts(a);
    return 0;
}