#include <stdio.h>

int main() {
    int n, window, i, sent = 0, ack;
    
    printf("Enter number of frames to be sent: ");
    scanf("%d", &n);

    printf("Enter window size: ");
    scanf("%d", &window);

    printf("\n--- Sliding Window Protocol Simulation ---\n");


    while (sent < n) {


        printf("\nSending frames: ");
        
        for (i = 0 ; i < sent + window && i < n; i++) {
            printf("Frame %d  ", i);
        }

        printf("\nEnter acknowledgement frame number (-1 for loss): ");
        scanf("%d", &ack);

        if (ack == -1) {
        printf("Acknowledgement lost! Retransmitting window...\n");
        } 
else {
           printf("Acknowledgement received for Frame %d\n", ack);
            sent = ack + 1;
        }
    }

    printf("\nAll frames transmitted successfully.\n");
    return 0;
}