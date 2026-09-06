#include <stdio.h>
#define amount 10

int main(){

    int i, sum = 0, list[amount] = {21, 22, 56, 87, 63, 10, 55, 99, 1, 81};
 
    for (i = 0; i < amount; i++){
        (list[i] % 2 == 0) ? (printf("Even number : %d\n", list[i]), sum += list[i]) : 0;
    }

    printf("The sum of even values is : %d", sum);


    return 0;
}