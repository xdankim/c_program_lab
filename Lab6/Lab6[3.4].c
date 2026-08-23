
#include <stdio.h>

void fnSeries(float *res, float *result);
void fnParallel(float *res, float *result);

int main(){

    int n;
    float res_val, parallel, sum_series = 0, sum_resiprocal = 0;

    printf("Insert the number of resistor :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Insert value for R%d : ", i);
        scanf("%f", &res_val);

        fnSeries(&res_val, &sum_series);
        fnParallel(&res_val, &sum_resiprocal);

        // // pembetulan baris 24
        parallel = 1 / sum_resiprocal;
    }

    printf("\nSeries : %.2f\nParallel : %.2f", sum_series, parallel);

    return 0;
}

void fnSeries(float *res, float *result){
    *result = *result + *res;
}

void fnParallel(float *res, float *result){
    *result = *result + (1.0 / *res);
}