#include <stdio.h>
#define row 2
#define MAX_LENGHT 50

int main (){

    char phone_book[row][3][MAX_LENGHT];
    int i, j;

    for (i = 0; i < row; i++){
        printf("Enter name : ");
        scanf(" %[^\n]", phone_book[i][0]);

        printf("Enter address/city : ");
        scanf(" %[^\n]", phone_book[i][1]);

        printf("Enter number phone : ");
        scanf(" %[^\n]", phone_book[i][2]);

        printf("\n");
        
        // [] is scanset
        // it allows scanf to read a character set when user type the input
        // ^ marking for exception. and \n is new line when user press Enter
        // this means scanf reads all character set that user input include space
        // when user press enter, it excepts the character set for \n
    }

    printf("\nName            Address          Number phone\n");
    printf("--------------------------------------------------------\n");
    for (j = 0; j < row; j++){
        printf("%s\t %s\t %s\n", phone_book[j][0], phone_book[j][1], phone_book[j][2]);
    }

    return 0;
}