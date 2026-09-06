#include <stdio.h>
#define amount 10

// define takde tempat utk register
// maksudnya, nilai di define tadi akan terus ke cpu.
// mekanisme : find and place
// beza dengan const sb ada tempat untuk register dan dikunsi supaya nilai tidak boleh diubah

int main(){
    
    int i;
    float min = 0.0, temperature[amount] = {78, 89, 65, 90, 35, 20, 88, 101, 56, 99};

    printf("display : ");
    for (i = 0; i < amount; i++){
        printf("%.f ", temperature[i]);
        
        min += temperature[i] / amount;
    }

    printf("\nMin (average) : %.2f", min);

    return 0;
}