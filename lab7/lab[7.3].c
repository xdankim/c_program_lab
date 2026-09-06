#include <stdio.h>
#define amount 5

int main(){

    int sum = 0, i, store_number[amount];

    printf("Enter five numbers : ");
    for (i = 0; i<amount; i++) {
        scanf("%d", &store_number[i]);

        sum += store_number[i];
    }

    printf("sum : %d", sum);

    printf("\nin reversed : ");
    for(i = amount - 1; i >= 0; i--){
        printf("%d ", store_number[i]);
    }
    return 0;
}