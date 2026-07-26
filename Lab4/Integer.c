#include <stdio.h>

int main() {

    int num, sum = 0, digit_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Your number is : %d", num);
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;

        digit_num++;
    }

    printf("\n\nThe number of digits is : %d", digit_num);
    printf("\nThe sum of the digits is : %d", sum);

    return 0;
}