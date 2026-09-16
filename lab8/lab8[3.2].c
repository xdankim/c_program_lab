#include <stdio.h>
#define NAME_STD 5

int main(){
    char names[NAME_STD][20];
    float marks[NAME_STD], average;
    int i, j;

    for (i = 0; i < NAME_STD; i++){
        printf("Enter student name : ");
        scanf("%s", names[i]);

        printf("Enter student marks : ");
        scanf("%f", &marks[i]);

        average += marks[i] / NAME_STD;
    }

    printf("\n\n");
    for (j = 0; j < NAME_STD; j++){
        printf("%s\t %.2f\n", names[j], marks[j]);
    }
    printf("\n");

    printf("Average marks for 5 students : %.2f", average);

    return 0;
}