#include <stdio.h>

struct Job
{
    char id;
    int deadline;
    int profit;
};

int main()
{
    int i, j, n;
    struct Job temp;

    struct Job jobs[10];

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter job id deadline profit: ");
        scanf(" %c %d %d",
              &jobs[i].id,
              &jobs[i].deadline,
              &jobs[i].profit);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(jobs[j].profit < jobs[j + 1].profit)
            {
                temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }

    printf("Job sequence:\n");

    for(i = 0; i < n; i++)
    {
        printf("Job sequence : %c --> profit:  %d \n", jobs[i].id,jobs[i].profit);
    }

    return 0;
}