#include <stdio.h>
#include <string.h>

#define row 2
#define NAME_CHAR 20
#define ADDRESS_CHAR 50
#define NUM 15

int main (){

    // Array
    // name[] = {"Ali"}
    char name[row][NAME_CHAR], address[row][ADDRESS_CHAR], number_phone[row][NUM];
    int i;

    for (i = 0; i < row; i++){
        printf("Enter name : ");

        // file get string
        // read all lines include character set from keyboard input (stdin)
        // fgets(variable, size_maximum, stdin)
        // stdin - standard input (from keyboard)
        fgets(name[i], sizeof(name[i]), stdin);

        // this process used to replace \n as 0 (null)
        // find name[i] at index number of 3 letsay
        // it changes a value as 

        // String Complement Span - strcspn
        // used to find an index number at where the characters store in array
        // let say Ali and strcspn("Ali", 'A'); the index number is 0
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter address/city : ");
        fgets(address[i], sizeof(address[i]), stdin);
        address[i][strcspn(address[i], "\n")] = '\0';

        printf("Enter number phone : ");
        fgets(number_phone[i], sizeof(number_phone[i]), stdin);
        number_phone[i][strcspn(number_phone[i], "\n")] = '\0';


        printf("\n");
    }

    printf("\nName            Address          Number phone\n");
    printf("--------------------------------------------------------\n");
    for (i = 0; i < row; i++){
        printf("%s\t %s\t %s\n", name[i], address[i], number_phone[i]);
    }

    return 0;
}