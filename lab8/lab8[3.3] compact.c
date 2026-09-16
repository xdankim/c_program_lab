#include <stdio.h>
#include <string.h>

#define row 10
#define col 3
#define MAX 30

int main (){

    // Array
    // name[] = {"Ali"}
    char phone_book[row][3][MAX];
    int i;

    for (i = 0; i < row; i++){
        printf("Enter name : ");
        fgets(phone_book[i][0], sizeof(phone_book[i][0]), stdin);

        printf("Enter address/city : ");
        fgets(phone_book[i][1], sizeof(phone_book[i][1]), stdin);

        printf("Enter number phone : ");
        fgets(phone_book[i][2], sizeof(phone_book[i][2]), stdin);

        for (int j = 0; j < col; j++){
            phone_book[i][j][strcspn(phone_book[i][j], "\n")] = '\0';
        }

        printf("\n");
    }

    printf("\nName            Address          Number phone\n");
    printf("--------------------------------------------------------\n");
    for (i = 0; i < row; i++){
        printf("%s\t %s\t %s\n", phone_book[i][0], phone_book[i][1], phone_book[i][2]);
    }

    return 0;
}