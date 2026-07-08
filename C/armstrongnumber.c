#include<math.h>
#include <stdio.h>




// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int temp=num;
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    while (temp!= 0) {
        temp /= 10;
        digits++;
    }

    temp= num;
    // Calculate the sum of the power of digits
    while (temp != 0) {
        
        sum += pow(temp%10, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

  

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}