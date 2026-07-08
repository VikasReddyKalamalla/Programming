#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;

    return b;
}

int main()
{
    int i, w;
    int n, W;

    int profit[10], weight[10];
    int K[10][10];

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter capacity: ");
    scanf("%d", &W);

    for(i = 1; i <= n; i++)
    {
        printf("Enter profit and weight: ");
        scanf("%d %d", &profit[i], &weight[i]);
    }

    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if(weight[i] <= w)
            {
                K[i][w] = max(
                    profit[i] + K[i-1][w-weight[i]],
                    K[i-1][w]
                );
            }
            else
            {
                K[i][w] = K[i-1][w];
            }
        }
    }

    printf("Maximum profit = %d", K[n][W]);

    return 0;
}