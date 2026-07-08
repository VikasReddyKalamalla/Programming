#include <stdio.h>

int set[10], subset[10];
int n, target;

void subsetSum(int index, int sum, int k)
{
    int i;

    if(sum == target)
    {
        printf("Subset: ");

        for(i = 0; i < k; i++)
        {
            printf("%d ", subset[i]);
        }

        printf("\n");

        return;
    }

    if(index == n || sum > target)
        return;

    subset[k] = set[index];

    subsetSum(index + 1,
              sum + set[index],
              k + 1);

    subsetSum(index + 1,
              sum,
              k);
}

int main()
{
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    subsetSum(0, 0, 0);

    return 0;
}