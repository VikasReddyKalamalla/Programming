// CRC

#include <stdio.h>
#include <string.h>

#define POLY "10001000000100001"
#define PLEN 17

void computeCRC(char data[], char crc[]) {
    char temp[200]; 
    int dlen = strlen(data);

    strcpy(temp, data);
    memset(temp + dlen, '0', PLEN - 1);
    temp[dlen + PLEN - 1] = '\0';

    for (int i = 0; i <= strlen(temp) - PLEN; i++)
        if (temp[i] == '1')
            for (int j = 0; j < PLEN; j++)
                temp[i + j] = (temp[i + j] == POLY[j]) ? '0' : '1';

    strncpy(crc, temp + dlen, PLEN - 1);
    crc[PLEN - 1] = '\0';
}

int main() {
    char data[100], crc[20], recv[120];

    printf("Enter data: ");
scanf("%s", data);

    computeCRC(data, crc); 
    printf("Transmitted: %s%s\n", data, crc);

    printf("Enter received data: ");
    scanf("%s", recv);

    computeCRC(recv, crc);
    printf("%s\n", strchr(crc, '1') ? "Error detected!" : "No error.");

    return 0;
}