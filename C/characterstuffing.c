// Character Stuffing in C



#include <stdio.h>
#include <string.h>

int main()
{
    char data[30], frame[50] = "";
    char sd, ed;     // starting and ending delimiter
    int i;

    printf("Enter characters to be stuffed: ");
    scanf("%s", data);

    printf("Enter starting delimiter: ");
    scanf(" %c", &sd);

    printf("Enter ending delimiter: ");
    scanf(" %c", &ed);

    // Add starting delimiter
    frame[strlen(frame)] = sd;

    // Byte stuffing logic
    for (i = 0; i < strlen(data); i++)
    {
        if (data[i] == sd || data[i] == ed)
        {
            frame[strlen(frame)] = sd;   // stuff delimiter
 }
        frame[strlen(frame)] = data[i];  // add data
    }

    // Add ending delimiter
    frame[strlen(frame)] = ed;

    printf("\nByte Stuffed Frame: %s\n", frame);

    return 0;
}