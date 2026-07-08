#include <stdio.h>

int main()
{
    int n, i, j;
    float temp;
    float weight[10], profit[10], ratio[10];

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter weight and profit: ");
        scanf("%f %f", &weight[i], &profit[i]);

        ratio[i] = profit[i] / weight[i];
    }

    // Sort items based on ratio in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                // Swap ratio
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                // Swap weights
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                // Swap profits
                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }

    printf("\nProfit/Weight ratios after sorting:\n");

    for(i = 0; i < n; i++)
    {
        printf("Item %d -> Weight = %.2f, Profit = %.2f, Ratio = %.2f\n",
               i + 1, weight[i], profit[i], ratio[i]);
    }

    return 0;
}