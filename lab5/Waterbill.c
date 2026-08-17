#include <stdio.h>

float calc_usage_cost(float previous, float current);
float calc_unpaid_cost(float unpaid);
float calc_total_bill(float usage, float unpaid);
void print_bill(int account_number, float bill);

int main(){

    int acc_number;
    float unpaid_bill, current_month, prev_month, usage, unpaid, bill, collection = 0.0;
    char condition = 'y';

    printf("-----------------Perlis Water----------------------\nThis program generates monthly water bill\n-------------------------------------------------------\n");

    while (condition != 'n') {
        printf("\nEnter account number: ");
        scanf("%d", &acc_number);

        printf("Enter unpaid bill: ");
        scanf("%f", &unpaid_bill);

        printf("Enter previous month and current month meter reading: ");
        scanf("%f %f", &prev_month, &current_month);

        // do calculation
        usage = calc_usage_cost(prev_month, current_month);
        unpaid = calc_unpaid_cost(unpaid_bill);
        bill = calc_total_bill(usage, unpaid);

        collection = collection + bill;

        print_bill(acc_number, bill);
        printf("Do you want to continue: y or n? ");
        scanf(" %c", &condition);
    } 

    printf("\nPerlis Watercollection: RM %.2f", collection);

    return 0;
}

float calc_usage_cost(float previous, float current){
    return (1.1/1000) * (current - previous);
}

float calc_unpaid_cost(float unpaid){
    float unpaid_ = (unpaid > 0.0) ? (unpaid + 2) : 0;
    return unpaid_;
}

float calc_total_bill(float usage, float unpaid){
    return (usage + unpaid) + 5.0;
}

void print_bill(int account_number, float bill){
    printf("\nYour account number is %4d\n", account_number);
    printf("Your total bill is RM %.2f.\n\n", bill);
}