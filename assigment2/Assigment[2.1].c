#include <stdio.h>

void getPrice(int *number_of_item, float *total_price);
void getDiscount(float total_price, int *discount_rate, float *discount_price);
int getRebate(float total_price);
void FinalPrice(float total_price, float discount_price, int rebate, float *final_price);
void printResult(int number_of_item, int discount_rate, float discount_price, int rebate, float final_price);

int main(){

    int number_of_item, discount_rate;
    float total_price = 0, discount_price, final_price;

    getPrice(&number_of_item, &total_price);
    getDiscount(total_price, &discount_rate, &discount_price);
    FinalPrice(total_price, discount_price, getRebate(total_price), &final_price);

    printResult(number_of_item, discount_rate, discount_price, getRebate(total_price), final_price);

    return 0;
}


void getPrice(int *number_of_item, float *total_price){
    int i;
    float price;

    printf("^^^^^^^^^^^^^^PC Fair Sales 2025^^^^^^^^^^^^^\n\n");

    printf("Enter number of item: ");
    scanf("%d", number_of_item);

    for (i = 0; i < *number_of_item; i++){
        printf("Enter the purchased price: ");
        scanf("%f", &price);
        
        *total_price = *total_price +  price;
    }
}

void getDiscount(float total_price, int *discount_rate, float *discount_price){
    if (total_price < 50) *discount_rate = 0;
    else if (total_price >= 50 && total_price <= 99) *discount_rate = 5;
    else *discount_rate = 10;

    *discount_price = total_price * (*discount_rate / 100.0);
}

int getRebate(float total_price){
    return (total_price >= 100) ? 5 : 0;
}

void FinalPrice(float total_price, float discount_price, int rebate, float *final_price){
    *final_price = total_price - discount_price - rebate;
}

void printResult(int number_of_item, int discount_rate, float discount_price, int rebate, float final_price){
    printf("\nSales Summary.\nTotal Item(s) : %d\nDiscount : %d%%\nDiscount price : RM %.2f\nRebate earned : RM%d\nFinal price : RM%.2f", number_of_item, discount_rate, discount_price, rebate, final_price);
}