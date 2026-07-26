
#include <stdio.h>

int main(){

    int num, max = 0;

    printf("Program to find the largest number\n");

    do {
        printf("Please enter a number (type -999 to stop) : ");
        scanf("%d", &num);

        max = (num > max) ? num : max;

    } while (num != -999);

    printf("%d", max);    
    

    return 0;
}