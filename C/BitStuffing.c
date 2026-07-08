// Bit Stuffing in C


#include<stdio.h>

void bitStuffing(int N, int arr[])
{
    int brr[50];     // stuffed array
    int i, j = 0;
    int count = 0;   // count consecutive 1s

    for (i = 0; i < N; i++) {

        brr[j++] = arr[i];   // copy bit

        if (arr[i] == 1) {
            count++;

            // If five consecutive 1s, insert 0
            if (count == 5) {
                brr[j++] = 0;
                count = 0;   // reset count
            }
        } 
        

else {
            count = 0;       // reset if bit is 0

        }
    }

    // Print stuffed bits
    for (i = 0; i < j; i++)
        printf("%d", brr[i]);
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1};
    int N = 6;

    bitStuffing(N, arr);

    return 0;
}