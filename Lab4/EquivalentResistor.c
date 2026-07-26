
#include <stdio.h>

int main(){

    int n;
    float res_val, parallel, sum_series = 0, sum_parallel = 0;

    printf("Insert the number resistor :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Insert value R%d : ", i);
        scanf("%f", &res_val);

        sum_series = sum_series + res_val;
        sum_parallel = sum_parallel + (1/res_val);
    }

    parallel = 1 / sum_parallel;

    printf("\nSeries : %.2f\nParallel : %.2f", sum_series, parallel);

    return 0;
}