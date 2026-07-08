// Byte Stuffing in C


#include <stdio.h>
#include <string.h>

int main()
{
    char data[20][20], frame[40][20];
    char flag[] = "flag";
    char esc[] = "esc";
    int n, i, k = 0;

    // Start flag
    strcpy(frame[k++], flag);

    printf("Enter number of data items: ");
    scanf("%d", &n);

    printf("Enter data:\n");
    for (i = 0; i < n; i++)
        scanf("%s", data[i]);

    // Byte stuffing logic
    for (i = 0; i < n; i++)
    {
        if (strcmp(data[i], flag) == 0 || strcmp(data[i], esc) == 0)
            strcpy(frame[k++], esc);   // insert ESC

        strcpy(frame[k++], data[i]);  // insert data
    }

    // End flag
    strcpy(frame[k++], flag);

    printf("\nByte Stuffed Frame:\n");
    for (i = 0; i < k; i++)
        printf("%s ", frame[i]);

    return 0;
}