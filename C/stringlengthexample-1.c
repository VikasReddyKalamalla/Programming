/*without counting the null charactrer that is \0 */

#include<stdio.h>
#include<string.h>
int main()
{
     unsigned l;
    char a[20];
    printf("enter a name : ");
    gets(a);
   l= strlen(a);
    printf("string length : %d",l);
    return 0;
}