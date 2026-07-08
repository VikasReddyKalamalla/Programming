#include<stdio.h>

int main() {
    // Variable Declaration
    int bucket_size, output_rate, n;
    int packet_size, stored = 0, i;

    // Taking Inputs
    printf("Enter Bucket Size: ");
    scanf("%d", &bucket_size);

    printf("Enter Output Rate: ");
    scanf("%d", &output_rate);

    printf("Enter Number of Packets: ");
    scanf("%d", &n);

    // Loop for each packet
    for(i = 1; i <= n; i++) {

        // Input packet size
        printf("\nEnter size of packet %d: ", i);
        scanf("%d", &packet_size);

        // Add packet to bucket
        stored += packet_size;

        // Check overflow condition
        if(stored > bucket_size) {
            printf("Overflow! Lost data: %d\n", stored - bucket_size);
            stored = bucket_size;
        }

        // Display before transmission
        printf("Before Transmission: %d\n", stored);

        // Transmission logic
        if(stored <= output_rate) {
            printf("Transmitted: %d\n", stored);
            stored = 0;
        } else {
            printf("Transmitted: %d\n", output_rate);
            stored -= output_rate;
        }

        // Display after transmission
        printf("After Transmission: %d\n", stored);
    }

    // End of program
    return 0;
}