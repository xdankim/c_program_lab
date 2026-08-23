#include <stdio.h>

void input(long int *matrixno, float *test1, float *test2, float *finalexam);
void sum_marks(float test1, float test2, float finalexam, float *result);
void compute_grade(float result, char *grade);
void print_all(long int matrix_no, float score, char grade);
void print_matrix_grade(long int matrix_no, char grade);

int main(){

    long int matrix_no;
    float test1, test2, finaltest, result;
    char grade, condition = 'y';

    while (condition == 'y' || condition == 'Y') {

        input(&matrix_no, &test1, &test2, &finaltest);
        sum_marks(test1, test2, finaltest, &result);
        compute_grade(result, &grade);
        print_all(matrix_no, result, grade);
        print_matrix_grade(matrix_no, grade);

        printf("Do you want to continue? ");
        scanf(" %c", &condition);

        printf("\n");
    }
    

    return 0;
}

void input(long int *matrixno, float *test1, float *test2, float *finalexam){
    printf("Insert matrix no. of the student\t\t: ");
    scanf("%d", matrixno);

    printf("Insert marks for Test 1 (total of 25)\t\t: ");
    scanf("%f", test1);

    printf("Insert marks for Test 2 (total of 25)\t\t: ");
    scanf("%f", test2);

    printf("Insert marks for Final Exam (total of 50)\t: ");
    scanf("%f", finalexam);

}

void sum_marks(float test1, float test2, float finalexam, float *result){
    *result = test1 + test2 + finalexam;
}

void compute_grade(float result, char *grade){
    if (result >= 80) *grade = 'A';
    else if (result >= 65 && result <= 79) *grade = 'B';
    else if (result >= 50 || result <= 64) *grade = 'C';
    else if (result >=40 || result <= 49) *grade = 'D';
    else if (result >= 25 || result <=39) *grade = 'E';
    else if (result < 25) *grade = 'F';
}

void print_all(long int matrix_no, float score, char grade){
    printf("\n\nTotal marks for %ld is %.2f and the grade is %c", matrix_no, score, grade);
}

void print_matrix_grade(long int matrix_no, char grade){
    printf("\nMatrix no\t: %ld\nGrade\t\t: %c\n\n", matrix_no, grade);
}