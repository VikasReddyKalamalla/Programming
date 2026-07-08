#include <stdio.h>

void merge(int a[], int start, int mid, int end)
{
    int i, j, k;
    int temp[100];

    i = start;
    j = mid + 1;
    k = start;

    while(i <= mid && j <= end)
    {
        if(a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while(j <= end)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(i = start; i <= end; i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int a[], int start, int end)
{
    int mid;

    if(start < end)
    {
        mid = (start + end) / 2;

        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);

        merge(a, start, mid, end);
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("Sorted elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}