#include <stdio.h>

void findMinMax(int array[], int size, int *min, int *max)
 {
    
    *min = array[0];
    *max = array[0];

    
    for (int i = 1; i < size; i++)
     {
        if (array[i] < *min) 
        {
            *min = array[i];
        }
        if (array[i] > *max)
         {
            *max = array[i];
        }
    }
}

int main()
 {
    int X[] = {4, 2, 0, 8, 20, 9, 2};
    int size = sizeof(X) / sizeof(X[0]);
    int min, max;

    findMinMax(X, size, &min, &max);

    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}