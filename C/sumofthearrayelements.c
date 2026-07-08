#include<stdio.h>
int  sumarray(int*arr,int size);
int main()
{
    int i,n
    ;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter %d elements : ",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum =  sumarray(arr,n);
    printf("sum of the array elemets are : %d ",sum);
    return 0;

}
int sumarray(int*arr,int size)
{
    int sum=0;
for(int i=0;i<size;i++)
{
    sum+=*(arr+i);
}
return sum;
}