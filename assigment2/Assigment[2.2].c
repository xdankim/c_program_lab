#include <stdio.h>

float calculate_legalFee(float housePrice) {
    
    float legalfee = 0, housefee;

    if (housePrice < 300000) legalfee = 1;
    else if (housePrice >= 300000 && housePrice <= 600000) legalfee = 0.8;
    else if (housePrice > 600000 && housePrice <= 1000000) legalfee = 0.7;
    else legalfee = 0.6;

    housefee = (legalfee/100.0) * housePrice;

    return housefee;
}

void calculate_deposit (float housePrice, float *deposit) {
    *deposit = (1.0/10.0) * housePrice;
}

void print_total (float housePrice, float legalFee, float deposit) {
    float sum;
    sum = deposit + legalFee;
    
    printf("*********************************\n\nHOMEBUYER CALCULATOR\n\n");

    printf("House Price (RM)\t\t : %.2f\nAmount of Deposit (RM)\t\t : %.2f\nLegal Fee Charge (RM)\t\t : %.2f\nTotal Money to be Prepared (RM)\t : %.2f", housePrice, deposit, legalFee, sum);
}


int main(){

    float house_price, legalfee, deposit;

    printf("Please enter house price (RM): ");
    scanf("%f", &house_price);

    legalfee = calculate_legalFee(house_price);
    calculate_deposit(house_price, &deposit);

    print_total(house_price, legalfee, deposit);

    return 0;
}