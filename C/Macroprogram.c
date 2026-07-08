#include<stdio.h>
//#define HITAM 
int main()
{
    #if define HITAM 
    printf("hitam is a green campus \n");
    printf("college timings 9 am to 4 pm \n");
    printf("branches cse it mec ece csm csd \n");
    #else
    printf("the MACRO is not defined \n");
    #endif 
    printf("End !!!!");
    return 0;
}